#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

/*
	Write a program to prompt the user to enter in a single line their first name initial, 
	followed by a space, their middle name initial followed by a space and the entirety of their surname. 
	Store this in a char array.

	The program should then output the first initial on one line, 
	then the middle initial on a separate line and the surname on a line of its own.

	Note: This program is to demonstrate the use of char arrays. 
	Ensure that you complete this program using a char array and that the data input by the user is stored in a single char array. 
	
	You can separate out the various parts of the name into separate arrays afterwards, 
	but the initial read from the console should put the entirety of the input into a single char array.

	Tips
		· You will need to loop through your characters to find the first occurrence of a space. 
			This should give you the information you require to be able to access the middle name initial.
		
		· You will need to use cin.getline instead of cin, if cin is used then only characters leading up to the first space will be stored. 
			To use it with a char array you call the function, and as parameters pass the array name, then size. 
			Like so: get.line(name, 50); 
			You can read up on this function here: http://cplusplus.com/reference/istream/istream/getline/
*/

template <typename Out>
void split(const string& s, char delim, Out result) {
	istringstream iss(s);
	string item;
	while (getline(iss, item, delim)) {
		*result++ = item;
	}
}

vector<string> split(const string& s, char delim) {
	vector<string> elems;
	split(s, delim, back_inserter(elems));
	return elems;
}

void Program25()
{
	string nameIn;
	cout << "What's your full name? ";
	cin >> nameIn;

	vector<string> names = split(nameIn, ' ');

	cout << names[0];
	cout << names[1];

	string initials = "";
	for (const auto& name : names) {
		initials += name[0];
		cout << name[0];
	}
	

	
}

int main() { Program25(); }
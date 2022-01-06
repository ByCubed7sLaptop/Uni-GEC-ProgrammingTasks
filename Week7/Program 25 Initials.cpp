#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <algorithm>

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

// Split a string into a vector of strings by a delimiter
vector<string> split(const string& s, char delimiter)
{
	vector<string> strings;

	stringstream test(s);
	string slice;

	while (getline(test, slice, delimiter))
		strings.push_back(slice);
	
	return strings;
}

void Program25()
{
	string nameIn;
	vector<string> names;
	
	while(names.size() < 3){
		cout << "Enter your first name initial, your middle name initial and your entire surname." << endl;
		getline(cin, nameIn);

		names = split(nameIn, *" ");
	}

	for (const auto& name : names) cout << name << endl;
	cout << endl;


	cout << "First initial: " << names[0][0] << endl;
	cout << "Middle initial: " << names[1][0] << endl;
	cout << endl;
	cout << "Surname initial: " << names[2] << endl;	
}

//int main() { Program25(); }
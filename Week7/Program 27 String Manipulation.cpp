#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

/*

	Write a program to prompt the user to enter their name, 
	which is then stored in a variable of string data type. 
	Insert their name in between the ‘XX’ in the following string:

	Output this string to the console. The program should then 
	remove the two X’s and then output the string to the screen again. 

	( You should have two outputs at this point: “Do you know who 
		loves C++ XnameX does!” and “Do you know who loves C++ name does!” )

	The program should then ask the user to input another name (this one MUST longer than the first). 
	The program should then locate the first name in the test string and replace it with the new name.

	Output the altered string with the second name in place of the first to the console and screenshot the entire process.

	Tips
		· Store the first and second name in a strings of their own.	
		· Don’t forget to test for a longer name on the second entry
*/

void Program27()
{
	string testString = "Do you know who loves C++ XX does!";

	string name;
	cout << "Enter your name" << endl;
	cin >> name;

	testString.insert(testString.find("X")+1, name);

	cout << testString << endl;

	testString.replace(testString.find("X"), 1, "");
	testString.replace(testString.find("X"), 1, "");

	cout << testString << endl;
	cout << endl;

	string name2;
	cout << "Enter a second, longer name" << endl;
	do cin >> name2; while (name.length() >= name2.length());

	testString.replace(testString.find(name), name.length(), name2);

	cout << testString << endl;
}

//int main() { Program27(); };
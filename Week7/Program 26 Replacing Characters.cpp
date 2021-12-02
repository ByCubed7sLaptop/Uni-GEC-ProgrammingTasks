#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <algorithm>

using namespace std;

/*
Write a program to prompt the user to enter in a sentence, which is then stored in a variable of type string. Output the string they have entered to the console screen, then replace every occurrence of ‘e’ with an ‘X’.

The program should then output the altered sentence.

Tips

· You will need to keep an index of position

· You will need to use a loop to access the characters in the string using the find and replace

· Alternatively, do research on the functions available in the <algorithm> file.
*/

void Program26()
{
	string input;
	cout << "Enter a sentence" << endl;
	cin >> input;

	cout << "Input: " << input << endl;

	replace(input.begin(), input.end(), 'e', 'X');
	
	cout << "Output: " << input << endl;
}

//int main() { Program26(); };
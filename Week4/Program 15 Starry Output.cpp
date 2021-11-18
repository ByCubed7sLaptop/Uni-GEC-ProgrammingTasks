#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

// Overload string * int operator
// A bad habit from python
inline string operator * (string str, unsigned int amount) {
	string output = "";
	while (amount--) {
		output += str;
	}
	return output;
}

int Program15()
{
    /*
		1.	Which asks the user for a number n between 1 and 10.  The program should then print out n lines.  Each should consist of a number of stars of the same number as the current line number. For example:

		>> Please enter a number:   5
		>> *
		>> * *
		>> * * *
		>> * * * *
		>> * * * * *

		2.	The user should then be asked if they wish to have another go [Y or N].
			•	An input of ‘Y’ will
				o	Loop the player back to number 1 above,
			•	An input of ‘N’ will
				o	Output a line of text saying “Goodbye.”
				o	Pause for a brief second so the user can read the text
				o	Then quit.
    */

	string stars = "* ";
	int inputInt;
	string inputString;

	while (true)
	{
		// Ask the user for a number between 1 and 10
		cout << "Enter a number between 1 and 10:" << endl;
		cin >> inputInt;

		if (inputInt < 1 || inputInt > 9) continue;

		// The program should then print out n lines.
		for (int i = 1; i <= inputInt; i++)
			cout << stars * i << endl;

		// The user should then be asked if they wish to have another go.
		cout << "Do you want another go?" << endl;
		cin >> inputString;
		cout << endl;

		// If no, exit
		if (inputString == "n" || inputString == "N") break;
	}

	// Pause for a brief second so the user can read the text
	// Then quit.
	cout << "Goodbye" << endl;
	this_thread::sleep_for(chrono::milliseconds(3000));
}

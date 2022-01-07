﻿#include <iostream>
#include <string>

using namespace std;

/*
	This program does not require a lot of code; however, it does introduce new functions that 
	will be used throughout your coding career. 

	They are, srand() and rand(), and these are used to generate random numbers. 
	
	Well, I say random, they aren’t truly random and creating a random device would be better 
	(contact Jay if you would like an example of how to create a random device) but for what we 
	need rand and srand are work perfectly well.

	Srand is used to create a seed. If the seed is set to 1, the generator reinitialized to its 
	original value and produces the same values as before any call to rand. We use time in our 
	case via the <ctime> to create a new seed every time the program is run based of the time.
	
	Rand produces a number generated by an algorithm that returns a sequence of apparently 
	non-related numbers each time it is called. This algorithm uses the seed we created with 
	srand to generate the series of numbers.

	Now, the program! Create a program that asks the user for a username and then states that 
	their chosen name is taken and provide them with a new one.

	Steps:
	•	Create a function prototype that takes a string reference.
	•	In main, create a string and ask the user for name which is stored in said string.
	•	Inform them the name is taken
	•	Call your function
	•	And output from main the string username value
		o	The function will require the following:
		
			srand(time(null));
			int num = rand();

		o	Using the reference, you must add the random numbers to the end of the name
			-	Hint: ints don’t join strings without some help…
*/


string genUsername(string name) {
	return name + to_string(rand());
}

void Program37()
{
	srand(time(NULL));

	string input;
	cout << "What's your username?" << endl;
	cin >> input;

	cout << "Username is taken." << endl;

	input = genUsername(input);
	cout << "New username = " << input;

	// "new functions that will be used throughout your coding career"
	// ... ( *‿*)?
}

int main() { Program37(); };
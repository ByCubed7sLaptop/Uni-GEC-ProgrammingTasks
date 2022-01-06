#include <iostream>
#include <string>

using namespace std;

/*
	Write a program that creates an int variable called num and has two functions, one for plus25, 
	one for minus25. Next create a reference to num called rNum; 
	
	All the below tasks must be done on the reference, with the output of num shown.

	1.	Ask the user to input a number and store it in num.
	2.	Output the value of num.
	3.	Add 25 to the current value stored in num by using rNum in the function.
	4.	Output num.
	5.	Ask the user to input another number and store this in num.
	6.	Output num.
	7.	Minus 25 from the current value of num by using rNum in the function.
	8.	Output num.

	Remember, only cout num to show changes to rNum affect num.

*/

void plus25(int& number) { number += 25; }
void minus25(int& number) { number -= 25; }


void Program36()
{
	int number;
	int& rNum = number;

	// 1. Ask the user to input a number and store it in num.
	string input;
	cout << "Input a number!" << endl;
	cin >> input;
	number = stoi(input);

	// 2. Output the value of num.
	cout << "Number: " << number << endl;

	// 3. Add 25 to the current value stored in num by using rNum in the function.
	cout << "Adding 25 to number." << endl;
	plus25(rNum);

	// 4. Output num.
	cout << "Number: " << number << endl;

	// 5. Ask the user to input another number and store this in num.
	cout << "Input another number!";
	cin >> input;
	number = stoi(input);

	// 6. Output num.
	cout << "Number: " << number << endl;

	// 7. Minus 25 from the current value of num by using rNum in the function.
	cout << "Minusing 25 to number." << endl;
	minus25(rNum);

	// 8. Output num.
	cout << "Number: " << number << endl;


	// *Insert incoherent screaming*
}

int main() { Program36(); };
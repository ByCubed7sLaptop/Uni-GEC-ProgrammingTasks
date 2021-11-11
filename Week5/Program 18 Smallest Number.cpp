#include <iostream>

using namespace std;

int smallestNumber(int a, int b)
{
	return a < b ? a : b;
}

int Program18()
{
	/*
		Write a program, which asks the user to input 2 integers. 
		These values should be then passed into a function to determine which is the smallest. 
		The function should return the smallest value.
			•	Creating variables to hold user input
			•	Not sure how to test which is bigger? Look back at week 2 Conditionals
			•	Have your program ask for the three sets of numbers before exiting. Look back at week 3 Loops. 
			•	How will you deal with numbers of the same value?
	*/

	int number1, number2;

	number1 = 1; number2 = 2;
	cout << "smallestNumber(" << number1 << ", " << number2 << ") returns: " << smallestNumber(number1, number2) << endl;
	
	number1 = 2; number2 = 1;
	cout << "smallestNumber(" << number1 << ", " << number2 << ") returns: " << smallestNumber(number1, number2) << endl;
	
	number1 = 5; number2 = 5;
	cout << "smallestNumber(" << number1 << ", " << number2 << ") returns: " << smallestNumber(number1, number2) << endl;
}

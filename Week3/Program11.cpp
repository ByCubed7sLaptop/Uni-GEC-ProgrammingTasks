#include <iostream>

using namespace std;

void Program11()
{
	// Write a program
	//	1. That asks to user to enter 2 numbers.
	//		a. Using those 2 numbers, calculate the sum(total) of the numbers and calculate the mean value of those numbers.
	//		b. Finally, print out the sum and mean values to the console.
		
	// 2. Ask the user to enter another number.
	//		a. Calculate the sum and mean with the current total and output in the same way as in step 1.
		
	// 3. Continue to ask the user indefinitely until the user enters a value of zero.

	// My dyslexia hates the wording of this ;-;

	int totalNumbers = 0;
	int number1;
	int number2;
		
	// Ask user to enter 2 numbers.
	cout << "Enter a number: " << endl;
	cin >> number1;
	totalNumbers++;

	cout << "Enter another number: " << endl;
	cin >> number2;
	totalNumbers++;

	// Using those 2 numbers, calculate the sum of the numbers and calculate the mean value of those numbers.
	int sum = number1 + number2;
	float mean = (float)sum / (float)totalNumbers;

	// Print out the sum and mean values to the console.
	cout << "Sum of the numbers = " << sum << endl;
	cout << "Mean of the numbers = " << mean << endl;
	cout << endl;

	int number3;

	// Ask the user to enter another number.
	cout << "Enter another number: " << endl;
	cin >> number3;
	totalNumbers++;

	// Calculate the sum and mean with the current total and output
	sum += number3;
	mean = (float)sum / (float)totalNumbers;

	cout << "New sum of the numbers = " << sum << endl;
	cout << "New mean of the numbers = " << mean << endl;
	cout << endl;

	// Continue to ask the user indefinitely 
	int input;
	while (true)
	{
		cout << "Enter another number: " << endl;
		cin >> input;
		totalNumbers++;

		// until the user enters a value of zero.
		if (input == 0) break;

		sum += input;
		mean = (float)sum / (float)totalNumbers;

		cout << "New(er) sum of the numbers = " << sum << endl;
		cout << "New(er) mean of the numbers = " << mean << endl;
		cout << endl;

	}
}
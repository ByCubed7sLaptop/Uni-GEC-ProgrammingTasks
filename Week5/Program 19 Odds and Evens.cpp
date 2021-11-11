#include <iostream>
#include <list>

using namespace std;

/*
Write a program, which asks the user to input 10 integers.
These values should be then passed individually to a function,
which will determine whether the value is odd or even.
The function should return a boolean value.

In the event of the value being odd, it should be added to an odd count,
and in the event of it being even it should be added to the even count.

Your program should then call a function
which will output how many odd numbers there were and the total,
and in a similar manner for the even numbers.

Use the following prototype for the output function:
	void outputResults ( int numOfOdd, int oddTotal, int numOfEven, int evenTotal );

*/

// My eyes 🔥-🔥
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	// which will output how many odd numbers there were and the total,
	// and in a similar manner for the even numbers.
	cout << "Number of odd = " << numOfOdd << endl;
	cout << "Odd Total = " << oddTotal << endl;
	cout << "Number of even = " << numOfEven << endl;
	cout << "Even Total = " << evenTotal << endl;
}

void Program19()
{
	auto IsEven = [](int number) { return number % 2 == 0; };

	int evenCount = 0;
	int evenTotal = 0;
	int oddCount = 0;
	int oddTotal = 0;

	int input;
	for (int i = 0; i < 10; i++)
	{
		cout << "Input a number: ";
		cin >> input;

		if (IsEven(input)) {
			evenCount++;
			evenTotal += input;
		}
		else {
			oddCount++;
			oddTotal += input;
		}

	}

	outputResults(oddCount, oddTotal, evenCount, evenTotal);

}
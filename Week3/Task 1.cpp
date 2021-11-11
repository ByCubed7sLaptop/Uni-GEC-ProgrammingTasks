#include <iostream>

using namespace std;

void Task1()
{
	bool a, b;
	int num1, num2, num3;

	a = false;
	b = true;

	num1 = 12;
	num2 = 5;
	num3 = 7;

	if (a)
		// single line of code
		// take the code below, we want the code
		// for num1 & num2 to be run if a is true
		a = true;

	if (a)
		num1++; //this will be run
	num2 += 5;	//this won't as no braces & second line
	num3 *= 2;
	
	// The above is the same as
	if (a)
	{
		num1++;
	}
	num2 += 5;
	num3 *= 2;

	// The correct way is
	if (a)
	{
		num1++;
		num2 += 5; // Now both lines will be run if a is true
	}
	num3 *= 2;

}
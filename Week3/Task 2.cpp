#include <iostream>

using namespace std;

void Task2()
{
    /*
		Sticking with num1 = 12; num2 = 5; and num3 = 7; Set a to equal false, b to equal true and add the following scenarios:
			- If a true – num1 += 10; num2 += 15;
			- If b true – num1++; num3 += 20;
			- If both false – num1--; num2--; num3--;
    */

	bool a, b;
	int num1, num2, num3;

	a = false;
	b = true;

	num1 = 12;
	num2 = 5;
	num3 = 7;

	if (a) 
	{ 
		num1 += 10; 
		num2 += 15; 
	}
	else if (b)
	{
		num1++; 
		num3 += 20;
	}
	else 
	{ 
		num1--; 
		num2--; 
		num3--; 
	}
}
#include <iostream>

using namespace std;

void AddTwo(int num)
{
	// Add two to the number passed
	num += 2;

	// Output the contents of the num within the function 
	cout << "Function: num = " << num << endl;
}

int Program17()
{
	/*
		This program will demonstrate how variables do not get affected outside of functions regardless of what you do to the local copies a function makes.

		1. Create a function prototype called addTwo which takes one parameter of type int called num.

		2. Add the function body below the main like so:
			.. cout << "Main [before]: myNum = " << myNum << endl;

		3. Now for the code within main:
			a. Create an int variable called myNum with the value of 6.
			b. Output to screen the value of myNum before the calling of the function
			c. Call the function, passing myNum:
			d. Now repeat step b but [after] the function call.

		4. Build and run the program. If all is correct your outputs should be 6, 8, 6. The value myNum has not been changed but rather a copy of its value is used within the function scope.
	*/

	int myNum = 6;

	cout << "Main [before]: myNum = " << myNum << endl;

	AddTwo(myNum);

	cout << "Main [after]: myNum = " << myNum << endl;
}

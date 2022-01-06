#include <iostream>
#include <string>

using namespace std;

/*
	This might be a challenge for some. Write a program that has integer variables called num1 and num2. 

	num1 and num2 should have values assigned by request from the user. 
	This must be done in a function called inputDetails(). 
	This function should have the following format:

	void inputDetails(int* n1, int* n2);

	Within the function it should ask the user to input two numbers and then populate the variables appropriately.
	
	Hint: create two int variables as normal and store the answers as you have previously, 
	just inside a function. Once you have these values your n1 and n2 need to equal these values…
	
	Within the main() function create a pointer of int data type called pNum and point it to num1. 
	Next call your inputDetails function passing the correct parameters.
	
	Hint: you need to pass addresses…
	
	Write another function called outputDetails() which takes num1, num2 and pNum as parameters.

	void outputDetails(int& integer1, int& integer2, int* pointer);

	This function should output the following details to the console screen:
	1.	num1 value.
	2.	num1 address in memory.
	3.	num2 value.
	4.	num2 address in memory.
	5.	pNum value (the address it currently holds)
	6.	pNum dereferenced value.
	7.	pNum address in memory.

	Ensure the output is referring to num1, num2 and pNum and not local copies. 
	
	This is where the function prototype is crucial. 
	Your output must be clear. 
	
	I’d recommend outputting some text to explain each of the above.

	Back in the main() function call outputDetails. Next you are to reassign the pointer to point at num2 and output the 
	same as above by calling your outputDetails() function. Might be useful to add a message stating the pointe change 
	before calling outputDetails again.

	Remember to set the pointer to point at nothing once you have finished with it.

*/

void inputDetails(int* n1, int* n2) 
{
	string input;
	cout << "Input 2 numbers!" << endl;
	cin >> input; *n1 = stoi(input);
	cin >> input; *n2 = stoi(input);
}

void outputDetails(int& integer1, int& integer2, int* pointer) 
{
	//	1.	num1 value.
	cout << "num1 value: " << integer1 << endl;
	//	2.	num1 address in memory.
	cout << "num1 address in memory: " << &integer1 << endl;
	cout << endl;

	//	3.	num2 value.
	cout << "num2 value: " << integer2 << endl;
	//	4.	num2 address in memory.
	cout << "num2 address in memory: " << &integer2 << endl;
	cout << endl;
	
	//	5.	pNum value(the address it currently holds)
	cout << "pNum value: " << pointer << endl;
	//	6.	pNum dereferenced value.
	cout << "pNum dereferenced value: " << *pointer << endl;
	//	7.	pNum address in memory.
	cout << "pNum address in memory: " << &pointer << endl;

}

void Program35()
{
	int number1, number2;
	inputDetails(&number1, &number2);

	int* pNum = &number1;

	outputDetails(number1, number2, pNum);

	// Every time I think about why we would format it like this, I'm taking 10 dmg
}

//int main() { Program35(); };
#include <iostream>

using namespace std;

/*
	Write a program, which asks the user to input 10 integers. 
	These values should be stored in an array for use later. 
	Once all numbers have been entered, the program should find and output the smallest value and its position in the array.
	
	Note: This is an array exercise and the numbers MUST be stored in an array.
	
	Run your program using the following values. The screenshot must show the use of these elements:
		- 1 2 3 4 5 6 7 8 9 10
		- 10 9 8 7 6 5 4 3 2 1
	
	Things to consider:
		· How will you ask the user for input?
		· How will you store the smallest element and its position?
		· How will you loop through the array and compare numbers?
		· How will you handle array range not being inclusive - inclusive? Position being 1-10 instead of 0-9.
		· Nested for loops will help and research how to solve the problem if stuck.
*/

void Program21()
{
	int numbers[10];
	
	for (int i = 0; i < 10; i++) {
		cout << "Input a number: " << endl;
		cin >> numbers[i];
	}

	int smallestNumber = numbers[0];
	for (const int& number : numbers) 
		smallestNumber = smallestNumber < number ? smallestNumber : number;

	cout << "Smallest number = " << smallestNumber;

}

//int main() { Program21(); };
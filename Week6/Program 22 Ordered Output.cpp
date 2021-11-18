#include <iostream>
#include <algorithm>
#include <iterator> 

using namespace std;

/*
	Write a simple C++ program that:
		• Declares a one-dimensional array to hold 5 ints.
		• Asks the user for 5 integers to fill the array.
		• Outputs the array in order.
		• Outputs the array backwards.
		• Outputs the largest element in the array and its position in the array.

	Things to consider:
		· Use a function to handle finding the biggest integer in the list.
		· Research the C++ library <algorithm>. Sorting the ints into ascending and descending can be done several ways.
			A good programmer will always find and use the simplest method.
			Specifically read up on the sort method in the algorithm library.
*/

template<class T> void PrintArray(T arr[], int size)
{
	cout << "[ ";
	for (int i = 0; i < size; i++) cout << arr[i] << (i + 1 == size ? " " : ", ");
	cout << "]" << endl;
}

template<class T> void ReverseArray(T arr[], int size)
{
	for (int start = 0, end = size - 1; start < end; start++, end--) {
		swap(arr[start], arr[end]);
	}
}

void Program22()
{

	// Declares a one-dimensional array to hold 5 ints.
	const int numbersSize = 5;
	int numbers[numbersSize];

	// Asks the user for 5 integers to fill the array.
	for (int i = 0; i < numbersSize; i++) {
		cout << "Input a number: ";
		cin >> numbers[i];
	}
	cout << endl;

	// Output the array
	cout << "Array" << endl;
	PrintArray(numbers, numbersSize);
	cout << endl;

	// Outputs the array in order.
	cout << "Array in order" << endl;
	int numbersSorted[numbersSize];
	memcpy(numbersSorted, numbers, numbersSize * sizeof(int));
	sort(numbersSorted, numbersSorted + numbersSize);

	PrintArray(numbersSorted, numbersSize);
	cout << endl;

	// Outputs the array backwards.
	cout << "Array backwards" << endl;
	int numbersReversed[numbersSize];
	memcpy(numbersReversed, numbersSorted, numbersSize * sizeof(int));
	ReverseArray(numbersReversed, 5);

	PrintArray(numbersReversed, 5);
	cout << endl;

	// Outputs the largest element in the array and its position in the array
	int largestNumber = numbersReversed[0];
	int index = 0;

	for (int i = 0; i < numbersSize; i++)
	{
		if (numbers[i] == largestNumber) {
			index = i;
			break;
		}
	}

	cout << "Largest number: " << largestNumber << " at index " << index << endl;

}
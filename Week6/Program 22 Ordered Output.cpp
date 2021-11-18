#include <iostream>

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
		· Research the C++ library <algorithm>. Sorting the ints into ascending and 
			descending can be done several ways. A good programmer will always find 
			and use the simplest method. Specifically read up on the sort method in 
			the algorithm library.
*/

void PrintArray(int arr[], int size)
{
	cout << "[ ";
	for (int i = 0; i < size; i++) cout << arr[i] << (i + 1 < size ? ", " : " ");
	cout << "]" << endl;
}

void ReverseArray(int arr[], int size)
{
	int start = 0;
	int end = size - 1;
    while (start < end)
    {
        int temp = arr[start];

        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}  

void Program22()
{
	int numbers[5];

	for (int i = 0; i < 5; i++) {
		cout << "Input a number: " << endl;
		cin >> numbers[i];
	}

	// Get array length
	int size = sizeof(numbers) / sizeof(numbers[0]);

	cout << "Array: " << endl;
	PrintArray(numbers, size);
	cout << endl;

	ReverseArray(numbers, size);

	cout << "Array [Reversed]: " << endl;
	PrintArray(numbers, size);
	cout << endl;

	// Find the largest number (with index) in the array
	int largestNumber = numbers[0];
	int largestNumberIndex = 0;
	for (int i = 0; i < 5; i++)
	{
		if (largestNumber < numbers[i])
		{
			largestNumber = numbers[i];
			largestNumberIndex = i;
		}
	}

	cout << "Largest number = " << largestNumber;

}
#include <iostream>
#include <algorithm>
#include <iterator> 

using namespace std;

template<class T> void PrintArray(T arr[], int size)
{
	cout << "[ ";
	for (int i = 0; i < size; i++) cout << arr[i] << (i + 1 == size ? " " : ", ");
	cout << "]" << endl;
}

template<class T> void ReverseArray(T arr[], int size)
{
	for ( int start = 0, end = size - 1;  start < end;  start++, end-- ) {
		swap(arr[start], arr[end]);
	}
}

/*
template <typename Iter>
int IndexOf(Iter first, Iter last, typename const iterator_traits<Iter>::value_type& x)
{
	int i = 0;
	while (first != last && *first != x)
		++first, ++i;
	return i;
}
*/

void Program22()
{
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

	// Declares a one-dimensional array to hold 5 ints.
	const int numbersSize = 5;
	int numbers[numbersSize];

	// Asks the user for 5 integers to fill the array.
	for (int i = 0; i < numbersSize; i++) {
		cout << "Input a number: " << endl;
		cin >> numbers[i];
	}

	// Outputs the array in order.
	int numbersSorted[numbersSize];
	memcpy(numbersSorted, numbers, numbersSize * sizeof(int));
	sort(numbersSorted, numbersSorted + numbersSize);

	PrintArray(numbersSorted, numbersSize);

	// Outputs the array backwards.
	int numbersReversed[numbersSize];
	memcpy(numbersReversed, numbersSorted, numbersSize * sizeof(int));
	ReverseArray(numbersReversed, 5);

	PrintArray(numbersReversed, 5);

	// Outputs the largest element in the array and its position in the array


}

int main() { Program22(); }
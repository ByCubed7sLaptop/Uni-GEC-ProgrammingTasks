#include <iostream>

using namespace std;

/*
	For this program you will be given a several starting variables and a 
	complete array containing strings. Your job as the programmer is to inform 
	the user, they have picked up a wizard’s staff and ask them if they would 
	like to swap it for the dagger in their inventory.

	The program should have two outcomes:

	1. The player chooses to keep the staff.
		a. Update the contents of their inventory accessing the correct element.
		b. Output the contents of their inventory to screen

	2. The player chooses to leave the staff behind.
		a. Inform the player they have left the item behind
		b. Output the contents of their inventory
*/

template <class T> void PrintArray(T arr[], int size)
{
	cout << "[ ";
	for (int i = 0; i < size; i++) cout << arr[i] << (i + 1 < size ? ", " : " ");
	cout << "]" << endl;
}

void Program23()
{
	const int inventoryMaxSize = 4;
	string inventory[inventoryMaxSize];

	int itemCount = 0;

	inventory[itemCount++] = "Sword";
	inventory[itemCount++] = "Battle Axe";
	inventory[itemCount++] = "Healing Potion";
	inventory[itemCount++] = "Dagger";

	cout << "Your inventory:" << endl;
	PrintArray(inventory, inventoryMaxSize);
	cout << endl;


	cout << "You have found a Staff." << endl;
	cout << "Do you want to replace the dagger with the staff?  Y / N" << endl;
	string input; cin >> input;
	cout << endl;


	if (input == "y" || input == "Y") 
	{
		inventory[3] = "Staff";
		cout << "You dropped the Dagger" << endl;
	}
	else cout << "You left the Staff" << endl;
	
	cout << endl;

	cout << "Your inventory:" << endl;
	PrintArray(inventory, inventoryMaxSize);
	cout << endl;
}

int main() { Program23(); }
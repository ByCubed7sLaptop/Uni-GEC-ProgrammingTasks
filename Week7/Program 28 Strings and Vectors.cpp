#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

/*

	Below is the output of a program you have to try and replicate.

	<Insert text replication of image here>

	The program must:
		· Start with an empty vector of string
		· Store the user’s choice in the aforementioned vector
		· Make use of cin and getline
		· Give the user the contents of their inventory and replace their choice with the magic ring
		· After being robbed you must delete the contents of the inventory and output the contents of the inventory one last time
*/

void Program28()
{
	vector<string> inventory;
	string option = "ඞ";

	inventory.push_back("sword");
	cout << "Which items do you wish to keep: Staff or knife" << endl;
	while (option.find("knife") == string::npos && option.find("staff") == string::npos) cin >> option;
	
	inventory.push_back(option);

	cout << "Which items do you wish to keep: Healing potion or Fire spell" << endl;
	while (option.find("heal") == string::npos && option.find("fire") == string::npos) cin >> option;
	inventory.push_back(option);

	cout << "You have found a magic ring, what do you want to replace in you inventory? [1-3]" << endl;
	while (option.find_first_not_of("123") != std::string::npos) cin >> option;
	inventory[stoi(option) - 1] = "magic ring";
	
	cout << "-- Inventory --" << endl;
	for (const auto& item : inventory) cout << "Items: " << item << endl;
	cout << endl;

	cout << "You got robbed D:" << endl;
	inventory.clear();

	cout << "-- Inventory --" << endl;
	for (const auto& item : inventory) cout << "Items: " << item << endl;
}

//int main() { Program28(); };
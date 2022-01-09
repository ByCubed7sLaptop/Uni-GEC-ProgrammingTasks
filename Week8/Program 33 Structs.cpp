#include <iostream>
#include <string>

using namespace std;

/*
	Write a program to prompt the user to enter their name [string], age [int] 
	and telephone number [string]. This is to be stored in a struct data type 
	that you have defined.

	Output the struct details to the console using a function defined within 
	the struct definition. Something along these lines:

		detail.print();

	Hint: If you get stuck look at the slides for member functions and possible 
	whitespace issues using cin to string.
*/

struct Details
{
	string name, phone;
	int age;

	string ToString() { return "Name: " + name + " | Age: " + to_string(age) + " | Phone: " + phone; }
};

void Program33()
{
	string buffer;
	Details details;

	cout << "What's your name?" << endl;
	getline(cin, details.name);

	cout << "What's your age?" << endl;
	getline(cin, buffer);
	details.age = stoi(buffer);

	cout << "What's your phone number?" << endl;
	getline(cin, details.phone);

	cout << details.ToString() << endl;
}

//int main() { Program33(); };
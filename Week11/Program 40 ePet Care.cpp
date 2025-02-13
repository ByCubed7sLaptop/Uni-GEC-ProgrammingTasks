#include <iostream>
#include "Pet.h"
#include "Pets.h"

using namespace std;

/*
	This program is building on the last and incorporating 
		separate files for the classes. 

	New protected functions that will affect how our animals 
		respond to the user.

	You will need four class files, Pet must be the parent and 
		then three child classes, Dog, Cat and Hamster. 

	These child functions need just three methods, constructor 
		and destructor and use of the virtual Talk method you will create in Pet.

	In Pet you will need:
		� A constructor which takes two pre-set integer parameters which are set to 0 in the braces (hunger and boredom)
		� A destructor
		� A virtual void method called Talk
		� Two void methods
			o Feed and Play, each taking a related a single pre-set int food or fun, both set to 4
				� (int food = 4)

		� Two private member variables
			o m_hunger and m_bored (set to 0)

		� Two protected methods
			o An inline constant function that takes type int and returns m_hunger + m_bored called GetMood
			o And a void PassingTime which takes a pre-set int called time that is equal to 1


	The source file needs to contain the following:
		� The Constructor
			o Cout that a new pet has arrived
			o Set m_hunger to equal hunger (hunger being the passed variable) and the same with m_bored equal to boredom

		� Feed
			o Cout a message that the animal has eaten e.g. �Burp!�
			o m_hunger needs to be set to -= food
			o create an if statement that controls if m_hunger falls below 0 then it is set to 0, preventing negative numbers
			o call PassingTime

		� Play
			o Same as above but with fun and m_bored

		� Talk
			o Cout �I am your pet and I feel �
			o Create an int mood and set to equal the GetMood method call
			o Add an if, else if, else statement
				� If mood above 15 cout �mad�
				� If above 10 � �frustrated�
				� If above 5 � �okay�
				� Else �happy�

	o Call PassingTime
		� PassingTime
			o M_hunger += time and the same for m_bored.

	The child override Talk method must state which animal it is but otherwise be pretty much the same as the Pet::Talk method. 
	Feel free to change the mood values as you like depending on the animal.

	In the main, create a pointer to Pet as you did with mammal, and ask the user which pet they want.
	Depending on the choice set the pointer to equal a new animal similar to the mammal program and call Talk(). 
	
	Once this has been done create a loop with a switch statement. Give the user the following options:
		� 0 � Quit
		� 1 � Listen to your pet
		� 2 � Feed your pet
		� 3 - Play with the pet

	� These cases should call the appropriate method

	Run the program and ensure it works correctly. 
	Screenshot should show the pets mood changing and show when they Talk it states the correct animal too.

	This program, with some changes to make it all automated, would be a simple state machine.
*/

Pet* CreatePet() {
	int input;

	while (true) {
		cout << "Which pet would you like?" << endl
			<< "[1] Cat" << endl
			<< "[2] Dog" << endl
			<< "[3] Birb" << endl;
		cin >> input;

		switch (input) {
		case 1: return new Cat();
		case 2: return new Dog();
		case 3: return new Birb();
		default: cout << "That's not a choice!" << endl;
		}
	}
}

void Mainloop(Pet* pet) 
{
	int input;

	while (true) {
		cout << "What do you want to do?" << endl
			<< "[0] Quit" << endl
			<< "[1] Listen to your pet" << endl
			<< "[2] Feed your pet" << endl
			<< "[3] Play with your pet" << endl;
		cin >> input;

		switch (input) {
		case 0: return;
		case 1: pet->talk(); break;
		case 2: pet->feed(); break;
		case 3: pet->play(); break;
		default: cout << "That's not a choice!" << endl;
		}

		cout << endl;
	}
}

void Program40()
{
	Pet* pet = CreatePet();
	cout << endl;

	Mainloop(pet);

	delete pet; // Thanos snap.gif
}

//int main() { Program40(); };

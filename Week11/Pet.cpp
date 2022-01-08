#include "Pet.h"

#include <iostream>

using namespace std;

//static const int Pet::hungerPtime = 1;
//static const int Pet::boredomPtime = 1;

Pet::Pet(int hunger, int boredom)
{
	// o Cout that a new pet has arrived
	//	 o Set m_hunger to equal hunger(hunger being the passed variable) and the same with m_bored equal to boredom
	this->hunger = hunger;
	this->boredom = boredom;
}

Pet::~Pet() {  }

void Pet::feed(int food) 
{ 
	//· Feed
	// 
	//	o Cout a message that the animal has eaten e.g.“Burp!”
	cout << "Burp!" << endl;

	//	o m_hunger needs to be set to -= food
	hunger -= food;
	//	o create an if statement that controls if m_hunger falls below 0 then it is set to 0, preventing negative numbers
	hunger = max(hunger, 0); 

	//	o call PassingTime
	passTime();
}
void Pet::play(int fun) 
{
	//· Play
	//  o Same as above but with fun and m_bored

	cout << "*Play noises*" << endl;

	boredom -= fun;
	boredom = max(boredom, 0);

	passTime();
}

void Pet::talk() 
{
	//· Talk

	//	o Create an int mood and set to equal the GetMood method call
	int mood = getMood();
	string feeling = "mad"; // Default value to mad, same.

	//	o Add an if, else if, else statement
	//	  § If mood above 15 cout “mad”
	//	  § If above 10 – “frustrated”
	//	  § If above 5 – “okay”
	//	  § Else “happy”
	if (mood < 5) feeling = "happy";
	else if (mood < 10) feeling = "okay";
	else if (mood < 15) feeling = "frustrated";
	//else feeling = "mad";

	//	o Cout “I am your pet and I feel “
	cout << "I am your pet and I feel " << feeling;
}

// Gets
int Pet::getHunger()  const { return hunger; }
int Pet::getBoredom() const { return boredom; }
int Pet::getMood()	  const { return hunger + boredom; }

std::string Pet::getMoodString() const
{
	//	o Create an int mood and set to equal the GetMood method call
	int mood = getMood();

	//	o Add an if, else if, else statement
	//	  § If mood above 15 cout “mad”
	//	  § If above 10 – “frustrated”
	//	  § If above 5 – “okay”
	//	  § Else “happy”
	if		(mood > 15) return "mad";
	else if (mood > 10) return "frustrated";
	else if (mood >  5) return "okay";
	//else return "happy";
	return "happy";
}

void Pet::passTime(int time)
{
	//o Call PassingTime
	//	· PassingTime
	//	o M_hunger += time and the same for m_bored.
	hunger += time;
	boredom += time;
}

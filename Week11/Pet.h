#pragma once

#include <string>

class Pet {
	// · Two private member variables
	// o m_hunger and m_bored(set to 0)
	int hunger, boredom;

public:

	// · A constructor which takes two pre-set integer parameters which are set to 0 in the braces (hunger and boredom)
	Pet(int hunger = 0, int boredom = 0);

	// · A destructor
	~Pet();

	// · A virtual void method called Talk
	virtual void talk() = 0;

	// · Two void methods
	//	 o Feed and Play, each taking a related a single pre - set int food or fun, both set to 4  §(int food = 4)
	void feed(int food = 4);
	void play(int fun = 4);


	int getHunger() const;
	int getBoredom() const;
	std::string getMoodString() const;


	// · Two protected methods
protected:

	// o An inline constant function that takes type intand returns m_hunger + m_bored called GetMood
	int inline getMood() const; // Note: inline is unneeded here

	// o And a void PassingTime which takes a pre - set int called time that is equal to 1
	void passTime(int time = 1);
};

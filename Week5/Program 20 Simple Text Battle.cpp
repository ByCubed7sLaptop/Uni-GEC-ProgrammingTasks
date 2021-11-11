#include <iostream>

using namespace std;


/*
	Below you have been provided with some simple pseudo code for you to work from.
	The aim is to recreate the program in working code using everything you have
	covered in lectures and tutorials so far.

	```
		namespace

		*Global variables*
			two integers for player and enemy health set to 1000(p) and 2000(e)
			boolean variable for playing set to true

		*Function prototypes*
			attack choice that returns nothing. Parameters required: one integer for choice
			play state function that returns a boolean

		*Main Function*
			local variable to hold the players choice

			A loop to run as long as playing is true
				tell user they have met a troll and have 3 options of attack
				1. use sword, 2. use magic, 3. use axe
				tell user choices have different effects
				store users choice

				call attack choice function passing user choice
				call play state function
			return 0;

		*Attack choice function*
			set constant ints for the passed user choice, sword damage = 300, magic_damage = 650, axe_damage = 450,
				troll_sword = 350, troll_magic = 50, troll_axe = 100;

				switch statement(condition user choice)
					case 1:
						set enemy health to take sword damage
						set player health to take troll sword damage
						tell user they have hit the troll
						tell user they have been hit
						if player or enemy health is less than 0 set to 0 (prevents negative health)
						tell user current player and enemy health
					case 2:
						set enemy health to take magic damage
						set player health to take troll magic damage
						tell user they have hit the troll
						tell user they have been hit
						if player or enemy health is less than 0 set to 0 (prevents negative health)
						tell user current player and enemy health
					case 3:
						set enemy health to take axe damage
						set player health to take troll axe damage
						tell user they have hit the troll
						tell user they have been hit
						if player or enemy health is less than 0 set to 0 (prevents negative health)
						tell user current player and enemy health

		*Play state function*
			create a char for play again option
			if enemy health is less than or equal 0
				tell user they have killed the troll and won
				ask to play again y/n
				store choice
				if they want to play again
					reset enemy and player health
					return playing true
				else
					return playing false
			if player health less than or equal 0
				tell user they have been killed
				ask to play again y/n
				store choice
				if they want to play again
					reset enemy and player health
					return playing true
				else
					return playing false

			return false;
	```
*/

int playerHealth = 1000;
int enemyHealth = 2000;

int swordDamage = 300;
int magicDamage = 300;
int axeDamage = 300;

int trollSwordDamage = 350;
int trollMagicDamage = 50;
int trollAxeDamage = 100;

void AttackChoice(int choice)
{
	switch (choice)
	{
	case 1:
		enemyHealth -= swordDamage;
		playerHealth -= trollSwordDamage;
		break;
	case 2:
		enemyHealth -= magicDamage;
		playerHealth -= trollMagicDamage;
		break;
	case 3:
		enemyHealth -= axeDamage;
		playerHealth -= trollAxeDamage;
		break;
	}

	cout << "You have hit the Troll" << endl;
	cout << "The Troll hit you" << endl;
	cout << endl;
	cout << "Player health: " << playerHealth << endl;
	cout << "Troll health: " << enemyHealth << endl;

	playerHealth = playerHealth > 0 ? playerHealth : 0;
	enemyHealth = enemyHealth > 0 ? enemyHealth : 0;
}


bool PlayState() 
{
	bool ending = false;
	if (enemyHealth == 0)
	{
		cout << "You have slain the Troll and have won!" << endl;
		ending = true;
	}
	if (playerHealth == 0)
	{
		cout << "You have died. :(" << endl;
		ending = true;
	}

	if (ending) 
	{
		playerHealth = 1000;
		enemyHealth = 2000;

		string choice;
		cout << "Do you want to play again?  Y / N" << endl;
		cin >> choice;

		if (choice == "y" || choice == "Y") return true;
		if (choice == "n" || choice == "N") return false;
		return false;
	}

	return true;
}

int Program20()
{
	int choice;
	bool playing = true;

	cout << "You have met a troll..." << endl;
	while(playing)
	{
		cout << "[1] Use sword  [2] Use magic  [3] Use axe" << endl;
		cin >> choice;

		AttackChoice(choice);
		playing = PlayState();
	}
}

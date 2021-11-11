#include <iostream>

using namespace std;

void Task3()
{
	/*
		Building on what was covered in the slidesand here, create a switch statement of chars.
			- Create a char variable called play_again
			- Ask user if they want to play again, y or n ?
			- Store the char in play_again and enter the switch statement.If case ‘y’ cout “you chose to play again”.
			- If ‘n’, cout “goodbye”and if neither cout “that’s not y or n”
	*/

	string playAgain;

	cout << "Do you wish to play again?" << endl;
	cin >> playAgain;

	/* BUG: This constant expression has type 'const char*' instead of the require 'int' type
	switch (playAgain)
	{
	case "y":
		cout << "You chose to play again." << endl;
		break;
	case "y":
		cout << "Goodbye." << endl;
		break;
	default:
		cout << "That’s not y or n" << endl;
		break;
	}
	//*/
	
	if (playAgain =="y") cout << "You chose to play again." << endl;
	else if (playAgain == "n") cout << "Goodbye." << endl;
	else cout << "That’s not y or n" << endl;
}
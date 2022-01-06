#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <algorithm>

using namespace std;

/*
	Write a game of Rock, Paper, Scissors; where the user is prompted to enter their choice as a string 
	(e.g. Paper or paper) and the computer's choice is generated randomly. 
	The first to score 3 wins, is the overall winner.

	At the conclusion of the game your program should output the result (who won) and the scores of both players. 
	Those not familiar with the game can learn a little about it here 
	(https://en.wikipedia.org/wiki/Rock-paper-scissors)

	When you have completed your program, take a screen shot of the last three plays and the concluding output (see below for an example).
*/

void Program29()
{

	vector<string> options = { "Rock", "Paper", "Scissors" };
	int playerPoints = 0;
	int compPoints = 0;

	// Initialize seed
	srand(time(NULL)); 

	while (1) 
	{
		string playerInput;
		while (find(options.begin(), options.end(), playerInput) == options.end())
		{
			cout << options[0] << ", " << options[1] << " or " << options[2] << "? ";
			cin >> playerInput;
		}
		cout << endl;

		// Get index of player input
		int playerOption = find(options.begin(), options.end(), playerInput) - options.begin();
		
		// Get random computer choice [0..2]
		int compOption = rand() % options.size();

		// Print output

		cout << "Player picked: " << options[playerOption] << endl;
		cout << "Computer picked: " << options[compOption] << endl;
		cout << endl;

		/*
			Rock	| 0
			+ 1		| 1
			% 3		| 1 == Paper

			...

			Scissor	| 2
			+ 1		| 3
			% 3		| 0 == Rock

			In theory, this works even if you were to add a 4th option
		*/
		
		if ((compOption + 1) % options.size() == playerOption) // Player Won
		{
			playerPoints++;
			cout << "Player won this round!" << endl;
		}

		else if ((playerOption + 1) % options.size() == compOption) // Compuer Won
		{
			compPoints++;
			cout << "Computer won this round!" << endl;
		}

		else if (playerOption == compOption) // Double check draw
			cout << "There was a Draw!" << endl;
		
		else cout << "Something went wrong. (╯°□°)╯︵ ┻━━━┻" << endl;
		

		// Check end game state
		if (playerPoints == 3) { cout << endl << "Player wins!" << endl; break; }
		if (compPoints == 3) { cout << endl << "Computer wins!" << endl; break; }

		cout << endl << "- - - - - - - - - - - - -" << endl;
	}

	cout << "Gameover." << endl;
}

//int main() { Program29(); };
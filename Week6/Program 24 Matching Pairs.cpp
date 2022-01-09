#include <iostream>

#include <vector>
#include <string>
#include <sstream>
#include <chrono>
#include <algorithm>
#include <random>

using namespace std;

/*
	The player selects 2 cards (one at a time) if they match the player gets a point and the 
	card remain face up. The game continues until all cards have been turned.

	Tips
		1. Look at the below pseudo code to help guide you as to how to construct this program
		2. Use the system(“cls”) function.
		3. Use the square brackets as the cards and have a number for selection.
		4. Use letters as your card faces.

	Create a char array for your 10 board cards A-E twice over mixed up. 
	Create a bool array for cards found and set this to equal false 
	^Hint: You'll need curly braces create a variable to hold the attempt 
	count create two prototype functions for drawing the game board. 
	
	One takes no variables the other requires the two guesses to be passed


	***Main***
	create variables for score and a bool for playing

	while the bool variable is true
		draw the game board

		Two ints to hold guess 1 and guess 2

		ask for a selection and store it
		Call the draw board that requires parameters, pass the guess

		ask for second selection
		do as above passing second guess

		//Check results
		Construct a way to check if the guesses match in an if statement
		^Hint: boardCards[selectionA -1]
			if match score++
			cards found [selectionA -1] = true
			cards found [B -1] = true

		else
			no match...

		if score is equal to 5, player has won and end game
		else attempts to be increased


	drawBoard
		system("cls"); //this will clear the board of any turns
		Tell player attempt count
		Create a for loop
			if cards found[i]
				cout "[" << boardCards[i] << "]"
			else
				cout "[" << i + 1 << "]"

			if i equal 4 split board

	drawBoard with parameters
		system("cls"); //this will clear the board of any turns
		Tell player attempt count
		Create a for loop
			if cards found[i] or i+1 == guess 1 or i+1 == guess 2
				cout "[" << boardCards[i] << "]"
			else
				cout "[" << i + 1 << "]"

			if i equal 4 split board
*/

void DrawBoard(string board, bool shown[])
{
	system("cls");

	for (int i = 0; i < board.size(); i++) {
		if (shown[i]) cout << "[" << board[i] << "]";
		else cout << "[" << i + 1 << "]";
	}
}

void Program24()
{
	string board = "ABCDEEDCBA";
	random_shuffle(board.begin(), board.end());

	bool found[10];


	// obtain a time-based seed:
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();

}

//int main() { Program24(); };
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

/*
	This program is to test not only your file handling ability 
	but also how you choose to handle the data internally. 

	Only 10 scores and names should ever be stored. A screenshot 
	of the scores text file should also be included below. 

	It MUST match the output expected from the screenshot of 
	the program running.

	Write a program that presents the user with the following 
	option screen:
		1.	Enter a score
		2.	Display scores
		3.	Exit

	If the user enters an invalid option, the program should 
	inform the user and then re-present the menu screen.
	
	- Upon entering ‘1’ the user should be asked for a score
		and a name. If the entered score is greater than the 
		lowest score already in the file, or there are less 
		than 10 scores stored this new score should be 
		incorporated in to the top ten. This should then be saved 
		in a text file called ‘scores.txt’. The user is then 
		returned to the menus screen.

	- Upon entering ‘2’ the program should output a well-formatted 
		list of scores, use iomanip library to help with this. 
		This should stay on screen until the user presses the return 
		key. If there are no scores the user should be informed and 
		then returned to the menu screen.

	- Upon entering ‘3’ the program should close. All file streams 
		should be closed correctly.

	NOTE: This program must not crash. It is up to you as programmer 
		to ensure invalid options are dealt with and that if the file 
		doesn’t exist and the user tries to access it that they are 
		informed, and the program returns to the menu. 
		
	The use of functions and structs will be useful. 
		
	Possible functions: 
		enterScore, displayScore, countScores, savedScores and loadScores.
*/

const int maxSize = 10;

int inputInt() {
	string input;
	while (true) 
	{
		cin >> input;
		if (!input.empty() && input.find_first_not_of("0123456789") == string::npos)
			return stoi(input);
		cout << "That's not a number!" << endl;
	}
}

vector<int> loadScores(string filename)
{
	vector<int> scores;

	ifstream file(filename);
	string data;
	while (getline(file, data))
		scores.push_back(stoi(data));

	return scores;
}

void saveScores(string filename, vector<int> newScores)
{
	ofstream file;
	file.open(filename);
	for (int& score : newScores) 
		file << score << endl;
	file.close();
}

void inputNewScore(vector<int>& currentScores)
{
	int score;
	string name;

	cout << "Enter the score" << endl;
	score = inputInt();

	cout << "Enter a name!" << endl;
	cin >> name;

	currentScores.push_back(score);

	// Sort scores
	std::sort(currentScores.begin(), currentScores.end(), std::greater<int>());

	// Slice by max
	currentScores = vector<int>(
		currentScores.begin(),
		// Size added can be less than max size
		currentScores.size() > maxSize ? currentScores.begin() + maxSize : currentScores.end()
		);

}

void Program39()
{
	string filename = "highscores.txt";

	string input;

	bool cont = true;
	while (cont) 
	{
		cout << "What would you like to do?" << endl
			<< "[1] Add a new score" << endl
			<< "[2] List scores" << endl
			<< "[3] Exit" << endl;		
		int option = inputInt();

		cout << endl;

		vector<int> currentScores = loadScores(filename);

		int i = 1;
		int newScore;
		switch (option) {
		case 1:


		case 2:
			cout << " - Scores -" << endl;
			for (int& score : currentScores)
				cout << i++ << ".\t" << score << endl;
			break;

		case 3:
			cont = false;
			break;


		default:
			cout << "That is not a valid option." << endl;
			break;
		}

		cout << endl;
	}
}

//int main() { Program39(); };
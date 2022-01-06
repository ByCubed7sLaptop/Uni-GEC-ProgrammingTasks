#include <algorithm>
#include <iostream>

using namespace std;

/*
	Create a new program that will ask the user to enter some text 
	(be sure to instruct them when adding text, in place of spaces add a comma). 
	
	This text should then be passed to a function, which will replace any commas found with blank spaces. 
	The function must be in the following format with this prototype:

	void comma2blank(char* textToChange)

	The input text must be passed into the function and be changed within this. 
	The altered text should be output to the console screen via the main function., 
	i.e do not output the altered text in the comma2blank() function.
	
	This can be achieved in a number of ways, feel free to include additional libraries.

*/

void comma2blank(char* textToChange) 
{
	string textString = string(textToChange);
	replace(textString.begin(), textString.end(), ',', ' '); // replace all 'x' to 'y'

	for (int i = 0; i < textString.size(); i++)
		textToChange[i] = textString[i];

	// Note: char* is barely used these days, 
	// wouldn't it make more sense to be questioned on more modern C++?
}

void Program34()
{
	char* input = new char;
	cout << "Insert some text! With commas!" << endl;
	cin >> input;

	cout << "Replacing your inputs commas with spaces!" << endl;
	comma2blank(input);

	cout << input << endl;
}

//int main() { Program34(); };
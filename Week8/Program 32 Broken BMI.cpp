#include <iostream>
#include <string>

using namespace std;

/*
	For this program you have been supplied with a cpp file containing 
	code for a quick BMI calculator. 
	
	- The program greets the user, takes their name, and then asks for 
	their weight in stone and pounds, which is then converted into total pounds. 
	
	- Asks for their height in feet and then inches followed by calculating 
	the height in total inches, and finally takes these values to calculate their BMI using 
	the formula of: 
		
		BMI = weight ∗ 703 / height^2.

	To get started, create a new project and either replace the default 
	cpp file created with the one attached or copy and paste the code 
	across, the choice is yours.

	Below you will find a screenshot of the expected output your program
	needs to replicate, however, within the code supplied there are 
	several errors and some code missing completely. You should be 
	presented with 5 errors in the error list however there is in fact 9 
	changes to be made including lines of code that are needed.
*/

// The temptation to refactor everything D:<

// Forward Declarations
float weight();
float height();
double calculateBMI(float weight, float height);

void Program32()
{
	cout << "Welcome to your BMI Calculator." << endl;

	cout << "Firstly what is your full name?" << endl;
	string name; getline(cin, name);

	cout << "Hi " << name << " lets get started." << endl;

	float totalWeight = weight();
	float totalHeight = height();

	double BMI = calculateBMI(totalWeight, totalHeight);

	cout << "Your BMI is: " << BMI << endl;
}

float weight()
{
	float stone, pounds;
	string buffer;

	while (1)
	{
		cout << endl;
		cout << "Please enter your weight in stone:" << endl;
		cin >> stone; getline(cin, buffer);

		if (stone >= 3 && stone <= 30) break;
		cout << "You must be between 3 and 30 stone" << endl << endl;
	}
	cout << "Thank you!" << endl;
	cout << endl;

	while (1)
	{
		cout << endl;
		cout << "Please enter the pounds as a 0.0 number:" << endl;
		cin >> pounds; getline(cin, buffer);

		if (pounds >= 0 && pounds <= 13) break;
		cout << "Pounds must be between 0 and 13" << endl << endl;
	}
	cout << "Thank you!" << endl;
	cout << endl;

	float weightTotal = stone / 12 + pounds;
	cout << "Your total weight in pounds is: " << weightTotal << endl;
	return weightTotal;
}

float height()
{
	float inches, feet;
	string buffer;

	while (1)
	{
		cout << endl;
		cout << "Please enter your height in feet:" << endl;
		cin >> feet; getline(cin, buffer);

		if (feet >= 2 && feet <= 7) break;
		cout << "You must be between 2 and 7 feet" << endl << endl;
	}
	cout << "Thank you!" << endl;
	cout << endl;

	while (1)
	{
		cout << endl;
		cout << "Please enter the inches:" << endl;
		cin >> inches; getline(cin, buffer);

		if (inches >= 0 && inches <= 11) break;
		cout << "Inches must be between 0 and 11" << endl << endl;
	}
	cout << "Thank you!" << endl;
	cout << endl;

	float inchesTotal = feet * 12 + inches;
	cout << "Your total height in inches is: " << inchesTotal << endl;
	return inchesTotal;
}

double calculateBMI(float weight, float height)
{
	// BMI = weight ∗ 703 / height ^ 2.
	return weight * 703 / (height * height);
}

//int main() { Program32(); };
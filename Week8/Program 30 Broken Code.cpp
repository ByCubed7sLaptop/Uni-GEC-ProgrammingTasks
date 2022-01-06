#include <iostream>

using namespace std;

/*
	Enter the following program and fix all the syntax errors to get it working. 
	Copy your fixed code in the relevant slot below along with a screenshot of the working program.

	Tip: 
		There are 6 errors (the double quotes don’t count if you have copy and pasted) 
		that will stop this program running. Your output may say more, but once these 6 
		errors are fixed all compounded errors will disappear.
	
	// // //

	int mian() {
	 	int num1 = 5;
	 	for (int i = 0 : i < num1; i++)
		{
			cout << “i = “ << i << endl;
		}
	
		int num1 = 15;
	
		for (int i = 0; i < num2; i++) {
			cout << “i = “ << i << endl;
	
		/*Pause the output/
		cin.get()
		return 0;
	}
*/

void Program30()
{
	// -- int mian() won't be picked up by the compilier
	int num1 = 5;
	//for (int i = 0 : i < num1; i++) -- Semi colon, not colon
	for (int i = 0; i < num1; i++)
	{
		//cout << “i = “ << i << endl; -- " not “ 
		cout << "i = " << i << endl;
	}

	//int num1 = 15; -- Already delared num1, 
	//				whether you ment to declare num2 or reuse num1 below is unknown
	int num2 = 15;

	for (int i = 0; i < num2; i++) //{ -- Unrequired open bracket
		//cout << “i = “ << i << endl; -- " not “ 
		cout << "i = " << i << endl;

	/*Pause the output/ -- Forgot the closing */
	
	//cin.get() -- Forgot the semicolon
	cin.get(); 

	//return 0; -- You dont need to return the default int in main()
}

/* 'BUGS'
	-- int mian() won't be picked up by the compilier
	-- Semi colon, not colon
	-- " not “
	-- Already delared num1 / undeclared num2
	-- Unrequired open bracket
	-- Forgot the closing asterisk
	-- Forgot the semicolon
	-- You dont need to return the default int in main()
*/

//int main() { Program30(); };
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

	#include <iostream> 
	
	using namespace std; 
	
	int main() 
	{ 
		int count; 
		cout << “enter a number:” << endl; 
		cin >> count; 
		
		for( int i = 1; i > count; i++ ) 
		{ 
			cout << i; 
			
			if( count = 2 ) 
				cout << “ is an even number” << endl; 
			else cout << “ is an odd number” << endl; 
		} 
		
		// Pause the output 
		cin.get();
*/

void Program31()
{
	int count = 3;

	//for (int i = 1; i > count; i++)
	for (int i = 1; i < count + 1; i++)
	{
		cout << i;
		//if (count = 2)
		if (i % 2)
			cout << " is an odd number" << endl;
		else
			cout << " is an even number" << endl;
	}

	// Pause the output 
	cin.get();

	// -- Forget the closing bracket for main()
}

//int main() { Program31(); };
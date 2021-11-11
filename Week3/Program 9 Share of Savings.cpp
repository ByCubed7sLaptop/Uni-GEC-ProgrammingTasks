#include <iostream>

using namespace std;

void Program9()
{
    /*
        Run this program in Visual studio and see if you can understand why we get a wrong answer printed out instead of the correct answer of 1000. 
        Then try and fix the error! Note there are multiple ways of fixing this and the quickest solution requires only 2 keystrokes!
        
        Add the fixed code below along with a screenshot of the output.

    */

    int mySavings = 2000;
    int yourPercentage = 50;
    int yourShare = (mySavings * (yourPercentage / 100));

    cout << "Your share: " << yourShare << endl;
}
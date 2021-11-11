#include <iostream>

using namespace std;

void Program11()
{
    /*
        Write a program that displays a short menu such as :

        >> Please choose your difficulty :
        >> 1. I’m too young to die!
        >> 2. Hey, not to rough!
        >> 3. Hurt me plenty.
        >> 4. Ultra - Violence.
        >> 5. Nightmare…

    	The program should use a switch statement to display a short message appropriate to the option chosen(such as "Just FYI, they will shoot back").
    */

    // Display menu
    cout << "Please choose your difficulty" << endl;
    cout << "1. I'm too young to die!" << endl;
    cout << "2. Hey, not to rough!" << endl;
    cout << "3. Hurt me plenty." << endl;
    cout << "4. Ultra - Violence." << endl;
    cout << "5. Nightmare..." << endl;

    // Get option
    int option;
    cin >> option;

    switch (option) {

    case 0:
        cout << "Tonight is going to be a terrible night." << endl;
        break;

    case 1:
        cout << "Imagine lossing health?" << endl;
        break;

    case 2:
        cout << "Enemies will fight back... most of the time" << endl;
        break;

    case 3:
        cout << "Raging may be a thing." << endl;
        break;

    case 4:
        cout << "Both you and your controller will not surivive." << endl;
        break;

    case 5:
        cout << "Impending doom approaches..." << endl;
        break;

    default:
        cout << "Or don't that's fine. ;-;" << endl;
        break;
    }


}
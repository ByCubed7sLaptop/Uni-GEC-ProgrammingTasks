// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct rect
{
	rect(int w, int h) 
	{
		width = w;
		height = h;
	}

	int width = 15;
	int height = 25;

	int Area()
	{
		return width * height;
	}
};


void Program6()
{
	rect rectangle(15, 25);
	
	cout << "Area of rectangle of size "<< rectangle.width <<", "<< rectangle.height << " is " << rectangle.Area() << endl;
}

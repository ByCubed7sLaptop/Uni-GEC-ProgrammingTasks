// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

static double tau = 6.28318530718;

struct Circle
{
	Circle(float rad)
	{
		radius = rad;
	}

	float radius = 15;

	int Area()
	{
		return 0.5 * tau * radius * radius;
	}
};


void Program6()
{
	Circle circle(25);
	
	cout << "Area of circle of size "<< circle.radius << " is " << circle.Area() << endl;
}

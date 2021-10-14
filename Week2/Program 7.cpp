// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Temp
{
	// Kelvin
	float value = 0;

public:
	void SetCelsius(float v) { value = v - 273.15; }
	void SetFahrenheit(float v) { value = v / 0.5556 - 241.15; }

	float GetCelsius() { return value + 273.15; }
	float GetFahrenheit() { return (value + 241.15) * 0.5556; }
};


void Program7()
{
	Temp* temp = new Temp();
	temp->SetFahrenheit(95);

	cout << temp->GetFahrenheit() << "F is equal to " << temp->GetCelsius() << "C." << endl;
}

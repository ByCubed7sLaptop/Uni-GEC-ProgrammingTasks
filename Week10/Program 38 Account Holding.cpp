#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

/*
	Reading the instructions and the pseudocode carefully. 
	This program will take what you learnt last week and incorporate file handling. 
	
	You will be creating a simple database that holds some account details: 
		name, account number and balance. 
	
	This program will give the user four choices:
	· To enter new details
	· Display the contents of the file
	· Display accounts that have a balance over 10,000
	· Exit the program

	You will be expected to create a struct to hold data and use two instances of that struct, 
	one to hold the input from the user and one to hold the data from reading in from the file 
	and output the results from. The file is expected to append the file.

	Some basic pseudocode is supplied below to help get you started, there are other ways to do it.
*/

struct Details {
	string name;
	unsigned int id;
	double balance; // Note: why is the balance a double?

	string data() 
	{
		return name + "|" + to_string(id) + "|" + to_string(balance);
	}

	void load(string data) 
	{
		vector<string> dataVector;
		std::istringstream iss(data);
		std::string item;
		while (std::getline(iss, item, '|')) {
			*std::back_inserter(dataVector)++ = item;
		}

		name = dataVector[0];
		id = stoi(dataVector[1]);
		balance = stod(dataVector[2]);
	}

	void save(string filename) 
	{
		ofstream file;
		file.open(filename, ios::app | ios::ate);
		file << data() << endl;
		file.close();
	}

	string toString() 
	{
		return name + "\t" + to_string(id) + "\t" + to_string(balance);
	}
};

Details EnterNewDetails()
{
	Details newDetails = Details();

	cout << "Enter the name" << endl;
	cin >> newDetails.name;

	cout << "Enter the id" << endl;
	cin >> newDetails.id;

	cout << "Enter the balance" << endl;
	cin >> newDetails.balance;

	return newDetails;
}

vector<Details> loadDetails(string filename) 
{
	vector<Details> detailsVector;
	
	ifstream file(filename);
	string data;
	while (getline(file, data)) {
		Details details;
		details.load(data);
		detailsVector.push_back(details);
	}

	return detailsVector;
}

void Program38()
{
	bool cont = true;
	while (cont) {
		string filename = "database.txt";

		cout << "Welcome. How can I help?" << endl
			<< "[1] Enter new details" << endl
			<< "[2] Display contents" << endl
			<< "[3] Display accounts with a balance over 10,000" << endl
			<< "[4] Exit" << endl;
		int input;
		cin >> input;

		cout << endl;

		switch (input) {
		case 1:
			EnterNewDetails().save(filename);
			break;

		case 2:
			cout << "Name \tId \tBalance" << endl;
			cout << "- - - - - - - - - - - - - -" << endl;
			for (auto& details : loadDetails(filename))
				cout << details.toString() << endl;
			break;

		case 3:
			cout << "Name \tId \tBalance" << endl;
			cout << "- - - - - - - - - - - - - -" << endl;
			for (auto& details : loadDetails(filename))
				if (details.balance > 10000)
					cout << details.toString() << endl;
			break;

		case 4:
			cont = false;
			break;

		default:
			break;
		}

		cout << endl;
	}

	// My dyslexia found it annoyingly hard to read the pseudocode, let alone understand it-
	// (╯°□°)╯︵ ┻━┻ 
}

//int main() { Program38(); };
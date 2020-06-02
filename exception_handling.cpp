//============================================================================
// Name        : exception_handling.cpp
// Author      : Divya Munot
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age;
	float salary;
	char status;
	string city;

	cout << "\n Enter your age : ";
	cin >> age;
	cout << "\n Enter your salary : ";
	cin >> salary;
	cout << "\n Do you have a car ? [y/n] ";
	cin >> status;
	cout << "\n Enter the name of your city : ";
	cin >> city;

	try
	{
			if(18 <= age && age <= 55)
				cout << "\n You are of the proper age ";
			else
				throw age;

			if(50000 <= salary && salary <= 100000)
				cout << "\n You have a great salary ";
			else
				throw salary;

			if(status == 'y' || status == 'n')
				cout << "\n You have a car ";
			else
				throw status;

			if(city == "pune" || city == "chennai" || city == "delhi" || city == "mumbai")
				cout << "\n CONGRAGULATIONS YOU ARE SELECTED ";
			else
				throw city;
	}

	catch(int age)
	{
		cout << "\n You are not of the proper age ";
	}

	catch(float salary)
	{
		cout << "\n Your salary is not within the expected range ";
	}

	catch(char status)
	{
		cout << "\n Bad luck !! ";
	}

	catch(string city)
	{
		cout << "\n Sorry, please migrate ";
	}

	return 0;
}

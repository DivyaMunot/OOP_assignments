//============================================================================
// Name        : fileHandling.cpp
// Author      : Divya Munot
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int no;
	char name[20];
	float per;

	cout << "\n Enter your name : ";
	cin >> name;
	cout << "\n Enter your roll number  : ";
	cin >> no;
	cout << "\n Enter percentage : ";
	cin >> per;

	ofstream out;
	out.open("dvfile.txt", ios::out);
	out << name << endl;
	out << no << endl;
	out << per << endl;
	out.close();

	char name1[20];
	int no1;
	float per1;

	ifstream in;
	in.open("dvfile.txt", ios::in);
	in >> name1;
	in >> no1;
	in >> per1;
	in.close();

	cout << "\n Name : " << name1;
	cout << "\n Roll number : " << no1;
	cout << "\n Percentage : " << per1;

	return 0;
}

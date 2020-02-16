//============================================================================
// Name        : stack_vector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>

using namespace std;

class stack
{
	list <int> l1;
	int MAX;
public :
		void accept_size();
		void push();
		void pop();
		void showlist();
};

void stack :: accept_size()
{
	cout << "\n Enter the size of queue : ";
	cin >> MAX;
}

void stack :: showlist()
{
	if(l1.size() != 0)
	{
		cout << "\n";
		list <int> :: iterator i;
		cout << "\n Stack : ";
		for(i=l1.begin(); i!=l1.end(); i++)
			cout << *i << "\t";
	}
	else
		cout << "\n The stack is empty. Hence underflow. ";
}

void stack :: push()
{
	if(l1.size() != MAX)
	{
		int i;
		cout << "\n Enter the element to push into the stack : ";
		cin >> i;
		l1.push_back(i);
	}
	else
		cout << "\n The stack is full. Hence overflow. ";
}

void stack :: pop()
{
	if(l1.size() != 0)
	{
		int k;
		k = l1.back();
		cout << "\n The pop element is : " << k;
		l1.pop_back();
	}
	else
		cout << "\n The stack is empty. Hence underflow. ";
}

int main()
{
	int choice;
	char x;
	stack obj;

	obj.accept_size();
	do
	{
		cout << "\n ---------------------------------- ";
		cout << "\n Enter your choice "
				"\n 1. Push an element "
				"\n 2. Pop an element "
				"\n 3. Display the stack "
				"\n 4. Exit "
				"\n Here : ";
		cin >> choice;

		switch(choice)
		{
			case 1 :obj.push();
				break;

			case 2 :obj.pop();
				break;

			case 3 :obj.showlist();
				break;

			default :
				break;
		}

	}while(choice < 4);

	cout << "\n ---------------------------------- ";
	cout << "\n                  END               ";
	cout << "\n ---------------------------------- ";

	return 0;
}

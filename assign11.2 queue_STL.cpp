//============================================================================
// Name        : queue_STL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>


using namespace std;

class queue
{
	list <int> l1;
	int MAX;
public :
		void accept_size();
		void insert();
		void remove();
		void showlist();
};

void queue :: accept_size()
{
	cout << "\n Enter the size of queue : ";
	cin >> MAX;
}

void queue :: showlist()
{
	if(l1.size() != 0)
	{
		cout << "\n";
		list <int> :: iterator i;
		cout << "\n Queue : ";
		for(i=l1.begin(); i!=l1.end(); i++)
			cout << *i << "\t";
	}
	else
		cout << "\n The queue is empty. ";
}

void queue :: insert()
{
	if(l1.size() != MAX)
	{
		int i;
		cout << "\n Enter the element to insert into the queue : ";
		cin >> i;
		l1.push_back(i);
	}
	else
		cout << "\n The queue is full. ";
}

void queue :: remove()
{
	if(l1.size() != 0)
	{
		int k;
		k = l1.front();
		cout << "\n The deleted element is : " << k;
		l1.pop_front();
	}
	else
		cout << "\n The queue is empty. ";
}

int main()
{
	int choice;
	char x;
	queue obj;

	obj.accept_size();

	do
	{
		cout << "\n ---------------------------------- ";
		cout << "\n Enter your choice "
				"\n 1. Insert an element "
				"\n 2. Delete an element "
				"\n 3. Display the Queue "
				"\n 4. Exit "
				"\n Here : ";
		cin >> choice;

		switch(choice)
		{
			case 1 :obj.insert();
				break;

			case 2 :obj.remove();
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

//============================================================================
// Name        : deque_using_STL.cpp
// Author      : Divya Munot
//============================================================================


#include <iostream>
#include <list>

using namespace std;

class dequeue
{
	list <int> l1;
	int MAX;
public :
		void accept_size();
		void insert_begin();
		void insert_end();
		void remove_begin();
		void remove_end();
		void showlist();
};

void dequeue :: accept_size()
{
	cout << "\n Enter the size of queue : ";
	cin >> MAX;
}

void dequeue :: showlist()
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

void dequeue :: insert_begin()
{
	if(l1.size() != MAX)
	{
		int i;
		cout << "\n Enter the element to push into the queue : ";
		cin >> i;
		l1.push_front(i);
	}
	else
		cout << "\n The queue is full. ";
}

void dequeue :: insert_end()
{
	if(l1.size() != MAX)
	{
		int i;
		cout << "\n Enter the element to push into the queue : ";
		cin >> i;
		l1.push_back(i);
	}
	else
		cout << "\n The queue is full. ";
}

void dequeue :: remove_begin()
{
	if(l1.size() != 0)
	{
		int k;
		k = l1.front();
		cout << "\n The pop element is : " << k;
		l1.pop_front();
	}
	else
		cout << "\n The queue is empty. ";
}

void dequeue :: remove_end()
{
	if(l1.size() != 0)
	{
		int k;
		k = l1.back();
		cout << "\n The pop element is : " << k;
		l1.pop_back();
	}
	else
		cout << "\n The queue is empty. ";
}

int main()
{
	int choice;
	char x;
	dequeue obj;

	obj.accept_size();
	do
	{
		cout << "\n --------------------------------------- ";
		cout << "\n Enter your choice "
				"\n 1. Insert an element at the beginning"
				"\n 2. Insert an element at the end"
				"\n 3. Delete an element from the beginning"
				"\n 4. Delete an element from the end"
				"\n 5. Display the Queue "
				"\n 6. Exit "
				"\n Here : ";
		cin >> choice;

		switch(choice)
		{
			case 1 :obj.insert_begin();
				break;

			case 2 :obj.insert_end();
				break;

			case 3 :obj.remove_begin();
				break;

			case 4 :obj.remove_end();
				break;

			case 5 :obj.showlist();
				break;

			default :
				break;
		}

	}while(choice < 6);

	cout << "\n -------------------------------------- ";
	cout << "\n                    END                 ";
	cout << "\n -------------------------------------- ";

	return 0;
}

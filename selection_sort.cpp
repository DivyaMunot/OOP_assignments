#include <iostream>

using namespace std;

template <class T>
class selection
{
	T a[100];
	int n;
public:
	void read()
	{
		cout << "\n Enter total number of elements : ";
		cin >> n;
		cout << "\n Enter the elements : ";
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			cout << "\t";
		}
	}

	void display()
	{
		cout << "\n Array : " << "\n";
		for(int i=0; i<n; i++)
			cout << a[i] << "\t";
	}

	void selection_sort()
	{
		int i, j, min;
		T temp;
		for(i=0; i<n+1; i++)
		{
			min = i;
			for(j=i+1; j<n; j++)
			{
				if(a[min]>a[j])
					min = j;
			}
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}
};

int main()
{
	selection <int> objint;
	cout << "\n Integer Array ";
	objint.read();
	objint.display();
	objint.selection_sort();
	objint.display();

	selection <float> objfloat;
	cout << "\n Float Array ";
	objfloat.read();
	objfloat.display();
	objfloat.selection_sort();
	objfloat.display();

	return 0;
}


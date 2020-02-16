
#include <iostream>

using namespace std;

template <class T>
class vector																	//generic class
{
	T a, b, c;

public :
		void get();																//to get the values
		void display();															//to display the vector
		void multiply_scalar();													//to multiply a scalar
};

/*------------------------------------------------------------------------------------------------------------------*/

template <class T>
void vector<T> :: get()															//to get the values
{
	cout << "\n Enter coefficient of i : ";
	cin >> a;
	cout << "\n Enter coefficient of j : ";
	cin >> b;
	cout << "\n Enter coefficient of k : ";
	cin >> c;
}

/*------------------------------------------------------------------------------------------------------------------*/

template <class T>
void vector<T> :: display()														//to display the vector
{
	cout << "\n VECTOR : ";
	if(b>0 && c>0)
		cout << " \t" << a << "i + " << b << "j + " << c << "k";
	else if(b<0 && c<0)
		cout << " \t" << a << "i " << b << "j " << c << "k";
	else if(b<0)
		cout << " \t" << a << "i " << b << "j + " << c << "k";
	else
		cout << " \t" << a << "i + " << b << "j " << c << "k";
}

/*------------------------------------------------------------------------------------------------------------------*/

template <class T>
void vector<T> :: multiply_scalar()												//to multiply a scalar
{
	T temp;
	cout << "\n Enter a scalar to multiply : ";
	cin >> temp;
	a = a*temp;
	b = b*temp;
	c = c*temp;
}

/*==================================================================================================================*/

int main()
{
	int ch;
	char x;

	do
	{
		cout << "\n --------------------------------------------------- ";
		cout << "\n Enter your choice : "
				"\n 1. Integer "
				"\n 2. Float "
				"\n 3. Double "
				"\n Here : ";
		cin >> ch;

		switch(ch)
		{
			case 1:
					cout << "\n Enter all Integer values ";
					vector<int> obj1;											//object created for integer values
					obj1.get();
					obj1.display();
					obj1.multiply_scalar();
					obj1.display();
				break;

			case 2:
				cout << "\n Enter all Float values ";
					vector<float> obj2;											//object created for float values
					obj2.get();
					obj2.display();
					obj2.multiply_scalar();
					obj2.display();
				break;

			case 3:
				cout << "\n Enter all Double values ";
					vector<double> obj3;										//object created for double values
					obj3.get();
					obj3.display();
					obj3.multiply_scalar();
					obj3.display();
				break;
		}
		cout << "\n Do you want to continue? [Y/N]";
		cin >> x;
	}while(x=='y' || x=='Y');

	cout << "\n --------------------------------------------------- ";
	cout << "\n                        END                          ";
	cout << "\n --------------------------------------------------- ";

	return 0;
}

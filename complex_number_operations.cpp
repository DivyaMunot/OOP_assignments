//============================================================================
// Name        : complex_number_operations.cpp
// Author      : Divya Munot
//============================================================================

#include<iostream>

using namespace std;

class complex
{
	int i, r;
public:
        complex()
		{
			i = 0;
			r = 0;
		}

		friend istream & operator >> (istream &in, complex &c)
		{
		    	cout << "\n Enter the real part : ";
            	    	in >> c.r;
            	    	cout << " Enter the imaginary part : ";
            	    	in >> c.i;
            	    	return in;
		}

		complex operator + (complex c)			        //addition of complex numbers
		{
			complex temp;
			temp.i = i + c.i;
			temp.r = r + c.r;
			return temp;
		}

		complex operator - (complex c)			        //subtraction of complex numbers
		{
			complex temp;
			temp.i = i - c.i;
			temp.r = r - c.r;
			return temp;
		}

		complex operator * (complex c)			        //multiplication of complex numbers
		{
			complex temp;
			temp.r = (r*c.r) - (i*c.i);
			temp.i = (r*c.i) + (i*c.r);
			return temp;
		}

		friend ostream & operator << (ostream &out, complex &c)
		{
		    	if (c.r==0)
                		out << c.i << "i" << "\n";
            		else if(c.i==0)
                		out << c.r << "\n";
            		else if(c.i<0)
                		out << c.r << c.i << "i" << "\n";
            		else
                		out << c.r << "+" << c.i << "i" << "\n";
		}
};

int main()
{
	complex c1,c2,c3;
	char x,ch;

	cout << "\n First complex number ";
    	cin >> c1;
	cout << "\n Second complex number ";
	cin >> c2;
	cout << "\n Entered 1st complex number : ";
	cout << c1;
	cout << "\n Entered 1st complex number : ";
	cout << c2;

	do
	{
		cout << "\n Enter your choice "
                	"\n + or addition "
			"\n - for subtraction "
			"\n * for multiplication "
			"\n Here : ";
		cin >> ch;

		switch(ch)
		{
			case '+':	c3 = c1 + c2;
					cout << "\n Addition = ";
					cout << c3;
				break;

			case '-':	c3 = c1 - c2;
					cout << "\n Subtraction = ";
					cout << c3;
				break;

			case '*':	c3 = c1 * c2;
					cout << "\n Multiplication = ";
					cout << c3;
				break;
		}
		cout << "\n Do you want to continue? [Y/N] " << "\t";
		cin >> x;
	}while(x=='y' || x=='Y');

	cout << "\n ------------------------------------------------------ ";
	cout << "\n                          END                           ";
	cout << "\n ------------------------------------------------------ ";

	return 0;
}

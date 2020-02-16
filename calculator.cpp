#include <iostream>

using namespace std;

class calculator
{
    float a, b,result;

public:

        void read();
        void add();
        void subtract();
        void multiply();
        void divide();

};

void calculator :: read()                                       //to read 2 numbers
{
    cout << "\n Enter 1st number : ";
    cin >> a;
    cout << "\n Enter 2nd number : ";
    cin >> b;
}

void calculator :: add()                                        //to add 2 numbers
{
    result = a+b;
    cout << "\n Addition = " << result;
}

void calculator :: subtract()                                   //to subtract 2 numbers
{
    result = a-b;
    cout << "\n Subtraction = " << result;
}

void calculator :: multiply()                                   //to multiply 2 numbers
{
    result = a*b;
    cout << "\n Multiplication = " << result;
}

void calculator :: divide()                                     //to divide 2 numbers
{
    if(b!=0)
    {
        result = a/b;
        cout << "\n Division = " << result;
    }
    else
        cout << "\n Division is not defined";
}

int main()
{
    char ch, x;
    calculator obj;                                             //object of class calculator
    obj.read();
    do
    {
        cout << "\n Enter your choice : ";
        cout << "\n + for addition ";
        cout << "\n - for subtraction ";
        cout << "\n * for multiplication ";
        cout << "\n / for division ";
        cout << "\n Here : \t";
        cin >> ch;

        switch(ch)
        {
            case '+':   obj.add();
                break;

            case '-':   obj.subtract();
                break;

            case '*':   obj.multiply();
                break;

            case '/':   obj.divide();
                break;

        }

        cout << "\n Do you want to continue? [Y/N] \t";
        cin >> x;

    }while(x=='y' || x=='Y');

    cout << " ************************************* " << endl;
    cout << "                  End                  " << endl;
    cout << " ************************************* " << endl;

    return 0;
}

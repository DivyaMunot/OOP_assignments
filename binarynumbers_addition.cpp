
#include <iostream>
#include <list>

using namespace std;

list<int> read()
{
    list<int> s;
    int x,n,i;

    cout << "\n Enter the number of bits : ";
    cin >> n;

    cout << "\n Enter the binary number : " << endl;

    for(i=0;i<n;i++)
    {
        cout << " ";
        cin>>x;
        if(x>1)
            throw x;
        s.push_back(x);
    }
    return s;
}

void display(list<int> g)
{
    list<int> :: iterator i;
    for(i=g.begin(); i!=g.end(); i++)
        cout << *i;
}

list<int> add(list<int> s1, list<int> s2)
{
    list<int> s;
    int sum, carry=0, b1, b2;

    while(!s1.empty() || !s2.empty())
    {
        b1=b2=0;
        if(!s1.empty())
        {
            b1 = s1.back();
            s1.pop_back();
        }
        if(!s2.empty())
        {
            b2 = s2.back();
            s2.pop_back();
        }
        sum = (b1+b2+carry) % 2;
        carry = (b1+b2+carry) / 2;
        s.push_back(sum);
    }

    if(carry == 1)
        s.push_back(1);

    return s;
}

int main()
  {
    list<int> l1, l2, l3;
    int ch;

    do
    {
        cout << "\n\n Enter your choice : "
                "\n 1. Accept the 1st binary number "
                "\n 2. Accept the 2nd binary number "
                "\n 3. Add the binary numbers "
                "\n 4. Exit"
                "\n Here : ";
        cin >> ch;

        switch(ch)
        {
            case 1 :cout << "\n 1st Binary Number ";
                    try
                    {
                        l1 = read();
                        cout << "\n The 1st Binary Number is : ";
                        display(l1);
                    }
                    catch(int x)
                    {
                        cout << "\n Exception! As the number should be a binary number only. ";
                    }
                break;

            case 2 :cout << "\n 2nd Binary Number ";
                    try
                    {
                        l2 = read();
                        cout << "\n The 2nd Binary Number is : ";
                        display(l2);
                    }
                    catch(int x)
                    {
                        cout << "\n Exception! As the number should be a binary number only. ";
                    }
                break;

            case 3 :if(!l1.empty() && !l2.empty())
                    {
                        cout<<"\n The result of addition is :";
                        l3 = add(l1, l2);
                        l3.reverse();
                        display(l3);
                    }
                    else if(!l1.empty())
                        cout << "\n The 2nd binary number is not entered. ";
                    else if(!l2.empty())
                        cout << "\n The 1st binary number is not entered. ";
                    else
                        cout << "\n No binary numbers are entered. ";
                break;
        }
    }while(ch!=4);

    cout << "\n ----------------------------------------- ";
    cout << "\n                     END                   ";
    cout << "\n ----------------------------------------- ";

    return 0;
  }

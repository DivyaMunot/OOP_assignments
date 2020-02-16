#include <iostream>

using namespace std;

template <class T>
class bubble_sort
{
private :
    T data[100];
    int i, j, n, temp;

public : void accept()                                              //to accept the elements of array
        {
            cout << "\n Enter the total number of elements : ";
            cin >> n;

            cout << "\n Enter " << n << " elements : \n";
            for(i=0; i<n; i++)
            {
                cout << "\t\t";
                cin >> data[i];
            }
        }

        void display()                                              //to display the array
        {
            cout << " Array : " << "\n" << "{";
            for(i=0; i<n; i++)
            {
                cout << data[i];
                if(i != n-1)
                    cout << " , ";
            }
            cout << "}" << endl;
        }

        void bsort()                                                //Bubble Sorting
        {
            for(i=0; i<n-1; i++)
            {
                for(j=0; j<n-i-1; j++)
                {
                    if(data[j] > data[j+1])
                    {
                        temp = data[j];
                        data[j] = data[j+1];
                        data[j+1] = temp;
                    } //if loop ends
                } //inner for ends
            } //outer for ends
        }
};

int main()
{
    int ch;
    char x;

    do
    {
        cout << "\n Enter your choice ";
        cout << "\n 1 for integer array ";
        cout << "\n 2 for float array ";
        cout << "\n Here : ";
        cin >> ch;

        switch(ch)
        {
            case 1: bubble_sort <int> obj1;                            //integer array object
                    obj1.accept();
                    obj1.display();
                    obj1.bsort();
                    cout << "\n Sorted ";
                    obj1.display();
                break;

            case 2: bubble_sort <float> obj2;                           //float array object
                    obj2.accept();
                    obj2.display();
                    obj2.bsort();
                    cout << "\n Sorted";
                    obj2.display();
                break;
        }
        cout << "\n Do you want to continue? [Y/N]";
        cin >> x;

    }while(x=='y' || x=='Y');

    return 0;
}

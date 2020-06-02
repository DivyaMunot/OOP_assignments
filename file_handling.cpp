//============================================================================
// Name        : file_handling.cpp
// Author      : Divya Munot
//============================================================================

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class directory
{
	char name[20];
	int phn;

public :
		void accept()
		{
			cout << "\n Enter name : ";
			cin >> name;
			cout << "\n Enter phone number : ";
			cin >> phn;
		}

		void display()
		{
			cout << "\n Name : " << name;
			cout << "\n Phone Number : " << phn << endl;
		}
        inline int getno()
		{
		    return phn;
		}
        char* getname()
		{
		    char *na = name;
		    return na;
		}
};

void create_file()
{
	int n;
	directory obj;

	cout << "\n Enter total no. of entries : ";
	cin >> n;

	ofstream file;
	file.open("file_obj.txt", ios::out | ios::binary);

    for(int i=0; i<n; i++)
    {
		obj.accept();                                   //read from the user
		file.write((char *)&obj, sizeof(obj));          //write data into the file
    }

	file.close();
}

void display_file()
{
    directory obj;

    ifstream file;
    file.open("file_obj.txt", ios::in | ios::binary);

    while(file)
    {
        file.read((char *)&obj, sizeof(obj));           //reading data from the file
        if(file.eof() != 0)                             //read till end of file
            break;
        obj.display();                                  //display to the user
    }

    file.close();
}

void add_new()
{
    directory obj;

    ofstream file;
    file.open("file_obj.txt", ios::app);

    cout << "\n Enter the New Record ";
    obj.accept();                                       //accepting new record
    file.write((char *)&obj, sizeof(obj));              //writing in the file at the end

    file.close();
}

void search_number()
{
    int no_s, flag=0;
    directory obj;

    ifstream file;
    file.open("file_obj.txt", ios::in);

    cout << "\n Enter the number to be searched : ";
    cin >> no_s;

    while(file)
    {
        file.read((char *)&obj, sizeof(obj));
        if(file.eof() != 0)                                 //to read till the end of file
            break;
        if(obj.getno() == no_s)
        {
            cout << "\n Entry found ";
            obj.display();                                  //display data to the user
            flag = 1;
            break;
        }
    }

    file.close();

    if(flag == 0)
        cout << "\n Entry not found ";
}

void search_name()
{
    char name_s[20];
    int flag=0;
    directory obj;
    char *n;
    n = obj.getname();


    ifstream file;
    file.open("file_obj.txt", ios::in);

    cout << "\n Enter the name to be searched : ";
    cin >> name_s;

    while(file)
    {
        file.read((char *)&obj, sizeof(obj));
        if(file.eof() != 0)
            break;
        if(strcmp(n, name_s) != 0)                          //compare the two names
        {
            cout << "\n Entry found ";
            obj.display();                                  //display the data to the user
            flag = 1;
            break;
        }
    }

    file.close();

    if(flag == 0)
        cout << "\n Entry not found ";
}

void modify()
{
    int no_m, flag=0;
    directory obj;

    fstream file;
    file.open("file_obj.txt", ios::out | ios::in);

    cout << "\n Enter the number to be modified : ";
    cin >> no_m;

    while(file)
    {
        file.read((char *)&obj, sizeof(obj));
        if(file.eof() != 0)
            break;
        if(obj.getno() == no_m)
        {
            cout << "\n Entry found ";
            obj.display();
            cout << "\n Enter new details ";
            obj.accept();

            int pos = -1*sizeof(obj);                       //pos is negative, so the pointer will move in backward direction
            file.seekp(pos, ios::cur);                      //move the put pointer from current position
            file.write((char *)&obj, sizeof(obj));          //write the modified details into the file

            flag = 1;
            break;
        }
    }

    file.close();

    if(flag == 0)
        cout << "\n Entry not found ";

}

int main()
{
	int ch;


	do
	{
	    cout << "\n ------------------------------------------ ";
		cout << "\n Enter your choice : "
				"\n 1. Create Directory "
				"\n 2. Display "
				"\n 3. Add new record "
				"\n 4. Search by name "
				"\n 5. Search by number "
				"\n 6. Update "
				"\n 7. Exit "
				"\n Here : ";
		cin >> ch;

		switch(ch)
		{
			case 1 :	create_file();
				break;

            case 2 :    display_file();
                break;

            case 3 :    add_new();
                break;

            case 4 :    search_name();
                break;

            case 5 :    search_number();
                break;

            case 6 :    modify();
                break;
		}

	}while(ch < 7);

	cout << "\n ---------------------------------------- ";
	cout << "\n                     END                  ";
	cout << "\n ---------------------------------------- ";

	return 0;
}

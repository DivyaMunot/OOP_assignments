//============================================================================
// Name        : multiple_inheritance.cpp
// Author      : Divya Munot
//============================================================================

#include <iostream>
#include <string>

using namespace std;

//Multiple Inheritance

//Base Class 1
class personal
{
	string name, addr;
	int age;
public:
    personal()
    {
        cout << "\n Personal Constructor ";
    }
	void get_personal()                                            //Personal class input
	{
		cout << "\n Enter name : ";
		cin >> name;
		cout << "\n Enter Age : ";
		cin >> age;
		cout << "\n Enter Address : ";
		cin >> addr;

	}
	void put_personal()                                            //Personal class output
	{
		cout << "\n Name \t\t\t: " << name;
		cout << "\n Age \t\t\t: " << age;
		cout << "\n Address \t\t: " << addr;
	}
	~personal()
    {
        cout << "\n Personal Destructor" << endl;
        cout << "\n ***************************************** ";
        cout << "\n                    End                    ";
        cout << "\n ***************************************** " << endl;
    }
};

//Base Class 2
class professional
{
	string stream, company;
	int experience;
public:
    professional()
    {
        cout << "\n Professional Constructor ";
    }
	void get_professional()                                           //Professional class input
	{
		cout << "\n Enter Stream : ";
		cin >> stream;
		cout << "\n Enter name of Current Company : ";
		cin >> company;
		cout << "\n Enter years of Experience : ";
		cin >> experience;
	}
	void put_professional()                                           //Professional class output
	{
		cout << "\n Stream \t\t: " << stream;
		cout << "\n Current Company \t: " << company;
		cout << "\n Years of Experience \t: " << experience;
	}
	~professional()
    {
        cout << "\n Professional Destructor ";
    }
};

//Base Class 3
class academic
{
      string degree;
      float percentage, sgpa;

public:
    academic()
    {
        cout << "\n Academic Constructor ";
    }
	void get_academic()                                            //Academic class input
	{
		cout << "\n Enter Degree obtained : ";
		cin >> degree;
		cout << "\n Enter Percentage : ";
		cin >> percentage;
		cout << "\n Enter SGPA : ";
		cin >> sgpa;
	}
	void put_academic()                                            //Academic class output
	{
		cout << "\n Degree obtained \t: " << degree;
		cout << "\n Percentage \t\t: " << percentage << "%";
		cout << "\n SGPA \t\t\t: " << sgpa;
	}
	~academic()
    {
        cout << "\n Academic Destructor";
    }
};

//Derived Class
class biodata : public personal, public professional, public academic
{
      string hobby, skills;
public:
    biodata()
    {
        cout << "\n Bio-data Constructor";
    }
	void get_biodata()                                            //Bio-data class input
	{
        get_personal();
        get_academic();
        get_professional();

		cout << "\n Enter Hobby : ";
		cin >> hobby;
		cout << "\n Enter Skills : ";
		cin >> skills;
	}
	void put_biodata()                                            //Bio-data class output
	{
	    cout << "\n ----------------------------------------- ";
	    cout << "\n BIODATA ";

        put_personal();
        put_academic();
        put_professional();

		cout << "\n Hobby \t\t\t: " << hobby;
		cout << "\n Skills \t\t: " << skills << endl;
	}
	~biodata()
    {
        cout<<"\n Bio-data Destructor ";
    }
};

int main()
{
	biodata obj;							//creating object of derived class bio-data
	obj.get_biodata();
	obj.put_biodata();

    return 0;
}

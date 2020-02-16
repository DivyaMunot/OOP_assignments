#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

class student
{
        int roll;
		static int count;
		string name, clas, div, dob, bg, add, tel, lic;
public:
        student();                                                          //default constructor
		student(string n,int r,string c,string d,string db,string b,string a,string t,string l);
                                                                            //parametric constructor
		student(student &c);                                                //copy constructor

		void read();
		void display();

		~student();                                                         //destructor

		static void no_obj();				                                //static function
		{
			cout << "\n Number of objects : " << count << endl;
		}
};

int student :: count;                                                       //static variable

student :: student()
{
	this->name = "NULL";
	this->roll = 0;
	this->clas = "NULL";
	this->div  = "NULL";
	this->dob  = "NULL";
	this->bg   = "NULL";
	this->add  = "NULL";
	this->tel  = "NULL";
	this->lic  = "NULL";
	count++;
}

student :: student(string n,int r,string c,string d,string db,string b,string a,string t,string l)
{
	this->name = n;
	this->roll = r;
	this->clas = c;
	this->div  = d;
	this->dob  = db;
	this->bg   = b;
	this->add  = a;
	this->tel  = t;
	this->lic  = l;
	count++;
}

student :: student(student &c)
{
	this->name = c.name;
	this->roll = c.roll;
	this->clas = c.clas;
	this->div  = c.div;
	this->dob  = c.dob;
	this->bg   = c.bg;
	this->add  = c.add;
	this->tel  = c.tel;
	this->lic  = c.lic;
	count++;
}

void student :: read()
{
		cout << "\n Enter Name : ";
		cin >> name;
		cout << "\n Enter Roll number : ";
		cin>> roll;
		cout << "\n Enter Class : ";
		cin >> clas;
		cout << "\n Enter Division : ";
		cin >> div;
		cout <<"\n Enter Date of birth : ";
		cin >> dob;
		cout << "\n Enter Blood Group : ";
		cin >> bg;
		cout << "\n Enter Address : ";
		cin >> add;
		cout << "\n Enter Telephone number : ";
		cin >> tel;
		cout << "\n Enter License : ";
		cin >> lic;
}

void student :: display()
{
    cout << "\n Student details are as follows " << endl;
	cout << "\n Roll Number : " << roll;
	cout << "\n Name : " << name;
	cout << "\n Class : " << clas;
	cout << "\n Division : " << div;
	cout << "\n Date of Birth : " << dob;
	cout << "\n Blood Group : " << bg;
	cout << "\n Address : " << add;
	cout << "\n Telephone Number : " << tel;
	cout << "\n License : " << lic << endl;
	cout << "\n ------------------------------------------------ " << endl;
}

student :: ~student()
{
	cout << "\n DESTRUCTOR CALLED ";
}

int main()
{
	student s1;                                                             //default constructor called
	student :: no_obj();
	s1.read();
	cout << "\n ------------------------------------------------ " << endl;
	cout << "\n DEFAULT CONSTRUCTOR CALLED " << endl;
	s1.display();

	student s2("Divya",145,"SE","A","29/5/1999","B+ve","Chinchwad","1234123455","03484302");
                                                                            //parametric constructor called
	student :: no_obj();
	cout << "\n PARAMETRIC CONSTRUCTOR CALLED " << endl;
	s2.display();

	student s3(s2);                                                         //copy constructor called
	student :: no_obj();
	cout << "\n COPY CONSTRUCTOR CALLED " << endl;
	s3.display();

	return 0;
}

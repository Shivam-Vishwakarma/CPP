#include <iostream.h>
#include <conio.h>
#include<stdio.h>
class person
{
    char name[20];
    int age;
    public:
	void getdata()
	{
	    cout<<"\n Name: ";
	    fflush(stdin);  //clears input stream
	    gets(name);
	    cout<<"\n Age: ";
	    cin>>age;
	}
	void display()
	{
	    cout<<"\n Name: "<<name;
	    cout<<"\n Age: "<<age;
	}
};
class student: public person
{
    char institute[100];
    public:
	void getdata()
	{
	    person::getdata();
	    cout<<"\n Name of College/School: ";
	    fflush(stdin);
	    gets(institute);
	}
	void display()
	{
	    person::display();
	    cout<<"\n Name of College/School: "<<institute;
	}
};
class employee: public person
{
    char company[100];
    float salary;
    public:
	void getdata()
	{
	    person::getdata();
	    cout<<"\n Name of Company: ";
	    fflush(stdin);
	    gets(company);
	    cout<<"\n Salary: Rs.";
	    cin>>salary;
	}
	void display()
	{
	    person::display();
	    cout<<"\n Name of Company: "<<company;
	    cout<<"\n Salary: Rs."<<salary;
	}
};
void main()
{   clrscr();
    student s;
    employee e;
    cout<<"\n Enter Student Data  ";
    s.getdata();
    cout<<"\n Displaying Student data";
    s.display();
    cout<<"\n Enter Employee Data";
    e.getdata();
    cout<<"\n Displaying Employee data";
    e.display();
    cout<<sizeof(e);

    getch();
    }




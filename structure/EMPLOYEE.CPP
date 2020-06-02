#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct employee
{
	char name[30];
	int en;
	float sal;
	public:
	void getinfo()
	{
clrscr();
cout<<"==============================================================";
cout<<"\n Enter name : ";
gets(name);
cout<<"\n Enter employee num :";
cin>>en;
cout<<"\n Enter salary : ";
cin>>sal;
}
	void showinfo()
	{
cout<<"\t"<<name<<"\t"<<en<<"\t"<<sal<<endl;
}
};



void main()
{
int ch;
employee o[10];
int n=-1;
while (1)
	{
	clrscr();
	cout<<endl<<"1. Add new employee";
	cout<<endl<<"2. Display all employee ";
	cout<<endl<<"3. exit";
	cout<<"\n enter choice : ";
	cin>>ch;
	switch (ch)
		{
		case 3: exit(0);
		case 2:
			{
			clrscr();
			cout<<"==============================================="<<endl;
			cout<<"\tname\temp_num\tsalary"<<endl;
			for(int i=0;i<=n;i++)
				o[i].showinfo();
			getch();
			}
			break;
		case 1:
			{
			n++;
			o[n].getinfo();
			getch();
			}
			break;
		default :	cout<<"\n Wrong Choice !!!";getch();break;
		}
	}
}
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[30];
	int rno;
	int per;
	public:
	void getinfo();
	void showinfo();
};
void student::getinfo()
{
clrscr();
cout<<"==============================================================";
cout<<"\n Enter your name : ";
gets(name);
cout<<"\n Enter your rno :";
cin>>rno;
cout<<"\n Enter percentage : ";
cin>>per;
}
void student::showinfo()
{
cout<<"\t"<<name<<"\t"<<rno<<"\t"<<per<<endl;
}
void main()
{
int ch;
student o[10];
int n=-1;
while (1)
	{
	clrscr();
	cout<<endl<<"1. Add new student ";
	cout<<endl<<"2. Display all students ";
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
			cout<<"\tname\trno\tpercentage"<<endl;
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
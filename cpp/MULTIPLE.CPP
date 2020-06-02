//multiple inh
#include<iostream.h>
#include<conio.h>
class p1
{
public : void input()
	{
	int age;
	cout<<"\n enter your age  ";
	cin>>age;
	}
};
class p2
{
public : void msg()
	{
	cout<<"\n hello i am parent2 class member ";
	}
};
class child: public p1, public p2  //multiple inh.
{
public : void show()
	{
	cout<<"\n i am member of child class ";
	}
};
main()
{
clrscr();
child  t;
t.input();
t.show();
t.msg();
getch();
}



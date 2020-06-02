//wap to implement multi level inh.
#include"my.h"
class super
{
public : void show()
	{
	cout<<"\n i am super base class member  ";
	}
};
class base1: protected super
{
public: void display()
	{
	cout<<"\n i am intermediat base1 class member  ";
	}
};
class child:public base1
{
public : void msg()
	{
	cout<<"\n i am child class member ";
	}
};
main()
{
clrscr();
child r;
//r.display();
r.msg();
r.show();
getch();
}


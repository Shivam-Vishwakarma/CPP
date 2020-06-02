//single inheritance/

#include"my.h"
class base
{
public: void msg()
	{
	cout<<"\n i am base class ";
	}
};
class child:public base
{
public: void show()
	{
	cout<<"\n i am child class  ";
	}
};
main()
{
clrscr();
child c;
c.show();
c.msg();
c.show();
getch();
}
//multiple  / MultiLevel
#include"my.h"
class b1
{
public: void msg1()
	{
	cout<<"\n im base 1";
	}
};
class b2: public b1
{
public: void msg2()
	{
	cout<<"\n i m base 2  ";
	}
};
class child:public b2
{
public : msgChild()
	{
	cout<<"\n im child  ";
	}
};
void main()
{
clrscr();
child c;
c.msgChild();
c.msg1();
c.msg2();
getch();
}

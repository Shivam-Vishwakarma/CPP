//wap to implement multiple inh.
#include<iostream.h>
#include<conio.h>
class a
{
public : void msg()
	{
	cout<<"\n hello i m base class1 member  ";
	}
};
class b
{
public :void show()
	{
	cout<<"\n hello im base class2 member ";
	}
};
class c:public a, public b
{
public :
	void disp()
	{
	cout<<"\n hello im child class member ";
	}
};
main()
{
//clrscr();
c c1;
c1.disp();
c1.msg();
c1.show();
getch();
}








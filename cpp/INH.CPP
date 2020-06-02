//wap to implement single inh.
#include"my.h"

class base
{
public : void show()
	{
	cout<<"\n i am base class member  ";
	}
};
class child: public base
{
public: void display()
	{
	cout<<"\n i am child class member  ";
	}
};
main()
{
clrscr();
child r;
base b;
r.display();
r.show();

getch();
}


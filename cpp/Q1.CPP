#include"my.h"
class base
{
public: void msg();
};
void base::msg()
{
cout<<"\n im base  ";
}

class child: public base
{
public: void show();
};
void child::show()
{
cout<<"\n im child ";
}
void main()
{
clrscr();
child c;
c.show;
c.msg();
getch();
}




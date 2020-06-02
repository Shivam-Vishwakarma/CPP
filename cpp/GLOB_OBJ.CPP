//wap to declare global object an observe execution of constructor.
#include"my.h"
struct test
{ clrscr();
test()
{
cout<<"\n constructor is called ";
}
~test()
{
cout<<"\n destructor is called  ";
}
};
test t;	  // t is a global object.
void main()
{
clrscr();
}


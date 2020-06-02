//wap to declare const. and destru. as private and call them explicitly.
#include"my.h"
class A
{
private: int x;
~A()
{
cout<<"\n destructur called ";
}
A()
{
x=7;
cout<<"\n constructor called  ";
}
public: void show()
{
this->A::A();    //this pointer called the constructor.
cout<<"\n x value  is  "<<x;
this->A::~A();  //this pointer called the destructor.
}
};
void main()
{
clrscr();
A *a;
a->show();
getch();
}


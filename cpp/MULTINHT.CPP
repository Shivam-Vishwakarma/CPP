/* Multiple Inheritance is a feature of C++ where a class can inherit
from more than one classes. The constructors of inherited classes are
called in the same order in which they are inherited. For example, in
the following program, B's constructor is called before A's constructor.
*/
#include<iostream.h>
#include<conio.h>
class A
{
public:
	A()
       {
	cout<<"\n A's constructor called " ;
       }
};
class B
{
public:  B()
	{
	cout <<"\n B's constructor called ";
	}
};
class C: public B, public A  // Note the order
{
public:
	C()
       {
       cout<<"\n C's constructor called" ;
       }
       void msg()
       {
       cout<<"\n hello ";
       }

};
void main()
{   clrscr();
    C d;	 // d is obj. of class C.
    getch();
}


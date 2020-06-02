/* WAP to declare nested class and access the variable of both the classes.

	   nested class mean - a class within the class .
*/
#include"my.h"
class a
{
public: int x;
	a()
	{ x=10;  }
class b
{
public: int y;
	b()
	{ y=20;  }
   void show()
   {
   a a1;
   cout<<"\n the value of x is "<<a1.x;
   cout<<"\n the value of y is "<<y;
   cout<<"\n sum is "<<a1.x+y;
   }
};         //close inner b class
};        //close outer a class
void main()
{
clrscr();
a::b b1;
b1.show();
getch();
}





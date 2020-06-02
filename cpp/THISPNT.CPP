/*
	this pointer concept
wap to use this pointer and return pointer reference.

*/
#include"my.h"
class test
{
int no;
public: void input()
	{
	cout<<"\n enter any no ";
	cin>>no;
	}
	void show()
	{
	cout<<"\n the minimum no is      "<<no;
	}
test min(test t)
{
if(t.no<no)
return (t);
else
return *this;//pointer this points to the obj t1. using this we can access
}	    // the individual member variable of obj t1.
};
main()
{
clrscr();
test t1,t2,t3; // 3 obj is created of test class.
t1.input();
t2.input();
t3=t1.min(t2);
t3.show();
getch();
}
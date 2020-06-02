/*
pointer to class  concept
wap to declare pointer to class . Initialize and display the contents
of class memeber

*/
#include"my.h"

void main()
{
	class test
	{
	public: char name[20];
		int age;
	};

test t={"ram",21};
test *ptr;   //ptr is pointer obj of test class

ptr=&(test)t; //assign the address of first member element of the class to pointer ptr.

clrscr();

cout<<t.name<<"\t"<<t.age;

cout<<ptr->name<<"\t"<<ptr->age;

}


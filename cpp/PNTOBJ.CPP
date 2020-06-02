/*
	pointer to object  concept
wap to declare pointer to object . Initialize and display the contents
of class memeber
*/
#include"my.h"
class test
{
int qty,price,amt;

public: void input(int a,int b,int c)
	{
	qty=a;
	price=b;
	amt=c;
	}
	void show()
	{
	cout<<"\n the total quantity is      "<<qty;
	cout<<"\n the price of 1 prduct is   "<<price;
	cout<<"\n the total amount is        "<<amt;
	}
};

main()
{
clrscr();
test t; // t is test class obj
test*ptr=&t; //ptr is pointer obj of test class. the address of t obj is assigned to pointer ptr
ptr->input(12,23,12*23);//using pointer ptr with -> op. call input()
(*ptr).show();  //using pointer ptr with . op. call show()
getch();
}
//to implement the concept of pointer.
#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int *a;   // a is int type pointer variable.
int b;    // b is only int type varible.
b=9;
a=&b;  // pointer varaible a stores the address/reference of varible b.
cout<<"\n *a value is  "<<*a;
cout<<"\n a value is   "<<a;
cout<<"\n &b value is  "<<&b;
cout<<"\n b value is   "<<b;
getch();
}



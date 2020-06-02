// no return and no argument to find square of given no.

#include"my.h"

void tanya();   //declartion

void tanya()   //definition
{
int no,sq;
cout<<"\n enter any no to find square ";
cin>>no;
sq=no*no;
cout<<"\n the square of given no is "<<sq;
}

main()
{
clrscr();
tanya();	//calling
getch();
tanya();
getch();
}




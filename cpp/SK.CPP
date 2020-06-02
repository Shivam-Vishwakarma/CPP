#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int*a;
int b;
b=5;
a= &b;
cout<<"\n * value is" <<*a;
cout<<"\n a value is" <<a;
cout<<"\n &b value is" <<&b;
cout<<"\n b value is" <<b;

getch();
}
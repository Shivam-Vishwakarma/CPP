#include<iostream.h>
#include<conio.h>
void func(int *a,int *b)
{
int x=*a+*b;
cout<<"\n Sum of "<<*a<<" and "<<*b<<" = "<<x;
}
void main()
{
clrscr();
int p=4,q=6;
func(&p,&q);
getch();
}

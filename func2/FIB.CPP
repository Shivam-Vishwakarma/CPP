#include<iostream.h>
#include<conio.h>
int i=0,j=1,t;
void fib(int n)
{
if(n==0)return;
cout<<"  "<<i;
t=j;
j=i+j;
i=t;
fib(n-1);
}
void main()
{
clrscr();
fib(10);
getch();
}
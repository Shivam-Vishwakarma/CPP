#include<iostream.h>
#include<conio.h>
float* func(int a,int b)

{
static float f;
f=a*b;
return &f;
}

void main()
{
clrscr();
int p=4,q=6;
float *x;
x=func(p,q);
cout<<endl<<p<<" * "<<q<<" = "<<*x;
getch();
}

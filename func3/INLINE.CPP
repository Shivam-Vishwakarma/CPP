#include<iostream.h>
#include<conio.h>
inline int *sum(int *a,int *b)
{
int c;
c=(*a)+(*b);
return &c;
}

void main()
{
clrscr();
int x=9,y=5,*z;
z=sum(&x,&y);
cout<<"\n sum = "<<*z;

getch();
}




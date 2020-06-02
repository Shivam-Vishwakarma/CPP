#include<iostream.h>
#include<conio.h>
float func(float a,float b=1.6,float c=2.8)
{
float s=a+b+c;
return s;
}
void main()
{
clrscr();
cout<<endl<<func(12.6);
cout<<endl<<func(12.6,3.2);
cout<<endl<<func(12.6,1.2,9.8);
getch();
}
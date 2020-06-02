//WAP to findthe given no. is positive negetive or zero using class
#include<iostream.h>
#include<conio.h>
class che
{
int b;
public:
void check();
};
void che::check()
{
cout<<"\n enter the the no";
cin>>b;
if(b<0)
{
cout<<"\n no is negative";
}
else if(b>0)
{
cout<<"\n no is positive";
}
else
{
cout<<"\n no is 0";
}
  }

void main()
{
che a;
clrscr();
a.check();
getch();
}
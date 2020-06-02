#include"my.h"
#include<process.h>
class test
{
public: void fun();
	void fun(int s);
	void fun(float p, float r, float t);
};
void test::fun()
{
int sq,no;
cout<<"\n enter no to find square ";
cin>>no;
sq=no*no;
cout<<"\n square is "<<sq;
}
void test::fun(int s)
{
int f=1,i;
for(i=1;i<=s;i++)
{
f=f*i;
}
cout<<"\n fact is "<<f;
}
void test::fun(float p,float r, float t)
{
float si;
si=(p*r*t)/100;
cout<<"\n simple intrest is "<<si;
}
void main()
{
test t;
int ch;
 do
 {
 cout<<"\n  1. Find Square 2. Find Simple Intrest 3. Find Factorial  4. Exit \n";
 cout<<"enter choice";
 cin>>ch;
 switch(ch)
  {
    case 1:
	      t.fun();
	      break;
    case 2:
	      t.fun(5);
	      break;
    case 3:
	      t.fun(5000,12,2);
	      break;
     case 4:
		exit(0);
		break;
  }
 }
 while(ch!=3);
 getch();
}

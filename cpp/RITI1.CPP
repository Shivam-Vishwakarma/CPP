//example of const. overloading
#include"my.h"
class test
{
public : test();           //default const.
	 test(int no );    //parametrized const.
	 test(float p, float r , float t);
};
test::test(float p,float r,float t)
{

float si=(p*r*t)/100;
cout<<"\n the simple intrest is  "<<si;

}

test:: test()
{
float area,r,pi=3.14;

cout<<"\n enter radious of circle   ";
cin>>r;
area=pi*r*r;
cout<<"\n the area of cirlcle is  "<<area;
}
test::test(int no)
{
int f=1;
while(no>0)
{
f=f*no;
no=no-1;
}
cout<<"\n \n \n the fact of your given no is  "<<f;
}
void main()
{
clrscr();

test t;                    //called default const
int a;
float p1,r1,t1;
cout<<"\n \n \n  enter princple Amt, Rate and time  ";
cin>>p1>>r1>>t1;
test s(p1,r1,t1);      // called para const who have 3 argument.
cout<<"\n \n \n plz enter a no to find factorial ";
cin>>a;

test(a);            // called par const who have 1 argument.
getch();
}




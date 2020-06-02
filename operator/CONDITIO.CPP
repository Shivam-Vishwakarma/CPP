#include<iostream.h>
#include<conio.h>
class over
{
public:
int a;
float b;
int operator< (over);
int operator> (over);
int operator== (over);
int operator!= (over);
over(int, float);
};

over :: over(int y, float x)
{
this->a=y;
this->b=x;
}

int over :: operator<(over x)
{
if((a<x.a) && (b<x.b))
	return 1;
else
	return 0;
}

int over :: operator>(over x)
{
if((a>x.a) && (b>x.b))
	return 1;
else
	return 0;
}

int over :: operator==(over x)
{
if((a==x.a) && (b==x.b))
	return 1;
else
	return 0;
}

int over :: operator!=(over x)
{
if((a!=x.a) && (b!=x.b))
	return 1;
else
	return 0;
}
void main()
{
clrscr();
int a,b,c,d;
over o1(2,4.5),o2(3,3.3),o3(2,4.5),o4(5,7.4);

a = o1 > o2;
cout<<endl<<a;
b = o1 < o2;
cout<<endl<<b;
c = o1 == o3;
cout<<endl<<c;
d = o4 > o2;
cout<<endl<<d;
getch();
}
#include<iostream.h>
#include<conio.h>
typedef class study
{
int a,b;
public:
	study()
	{
	a=b=0;
	}
	study(int x,int y)
	{
	a=x;
	b=y;
	}
	study operator+(study m1)
	{
	study x;
	x.a=a+m1.a;
	x.b=this->b+m1.b;
	return x;
	}
	void display()
	{
	cout<<"\na="<<a<<"  b="<<b;
	}
}s;
void main()
{
clrscr();
s *x,s1(1,2),s2(3,4),s3;
s1.display();
x=&s2;
x->display();
s3=s1+s2;
s3.display();
getch();
}
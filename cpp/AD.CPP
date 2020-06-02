#include<iostream.h>
#include<conio.h>
class  test
{
public : int x,y;
	float z;
	void show();
};
void test::show()
{
x=9;
y=9;
z=x+y;
cout<<"\ sum is "<<z;
}
main()
{clrscr();
test t;
t.show();
getch();
}

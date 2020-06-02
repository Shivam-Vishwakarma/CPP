#include<iostream.h>
#include<conio.h>
class test
{
private: int a;
	void cub()
	{ int b;
	cout<<"\n enter no  ";
	cin>>a;
	b=a*a*a;
	cout<<"\n cube is  "<<b;
	}
public:	void show()
	{
	cub();
	}
};
main()
{
clrscr();
test t;
t.show();
getch();
}

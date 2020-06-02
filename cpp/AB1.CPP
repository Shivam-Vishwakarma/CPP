#include"my.h"
class abc
{
private : int x,y,z;
	void sum()  //declartion of sum()
	{
	cout<<"\n enter two no ";
	cin>>x>>y;
	z=x+y;
	cout<<"\n sum is "<<z;
	}
public: void msg();
};
void abc::msg()  //definition of sum()
{
cout<<"\n hello dear ";
sum();  //calling of sum() private member
}
main()
{
clrscr();
abc t;  //t is object of class abc
t.msg(); //calling of msg()
getch();
}


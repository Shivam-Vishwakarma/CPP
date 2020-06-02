#include"my.h"
class test
{
public : int cb,pri;
	test(int no)	//paramet const.
	{
	pri=no;
	}
	test(test &a)   //copy const.
	{
	pri=a.pri;
	}
	void show();
};
void test::show()
{
cout<<"\n price of this obj is "<<pri;
}
main()
{
test a1(5);
a1.show();
test a2(a1);     //copy const called
a2.show();
}
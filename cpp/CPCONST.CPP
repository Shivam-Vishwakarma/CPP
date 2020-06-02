#include"my.h"
class test
{
public : int cb;
	test(int no)	//paramet const.
	{
	cb=no*no*no;
	}
	test(test &a)
	{
	cb=a.cb;
	}
	void show();
};
void test::show()
{
cout<<"\n cube of no is "<<cb;
}
main()
{
test a1(5);
a1.show();
test a2(a1);
a2.show();
}
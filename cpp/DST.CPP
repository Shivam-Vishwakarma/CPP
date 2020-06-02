// example to implement destructor.
#include"my.h"
class test
{
	public : test()
		{
		cout<<"\n im constructor ";
		}
		~test()
		{
		cout<<"\n im destruc  ";
		}
		test(int no)
		{
		cout<<"\n"<<no;
		}
};
main()
{
clrscr();
test t1;
test t2(5);
getch();
}



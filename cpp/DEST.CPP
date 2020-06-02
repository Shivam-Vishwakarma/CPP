#include"my.h"
int r=9;
class test
{
public : test()
	 {
	 cout<<"\n const ";
	 }
	 ~test()
	 {
	 cout<<"\n dest ";
	 }
};
main()
{ clrscr();
test t;
if(23>7)
{
test t1;
}
getch();
}



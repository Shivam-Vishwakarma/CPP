#include"my.h"
class manu
{
public : manu(int a);	// paramatrized constructor
	 manu()        // defaulat const.
	 {
	 cout<<"\n i am default const.  ";
	 }
};
manu::manu(int a)
{
cout<<"\n hello ";
int b=a*a;
cout<<"\n squre is "<<b;
}
main()
{
clrscr();
int no;
cout<<"\n enter any no  ";
cin>>no;
manu m(4);     //call paramatrized const.
manu s;	       // call default const.
getch();
}


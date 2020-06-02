#include<iostream.h>
#include<conio.h>
class test
{
	private:
	       int a,b;
	public:
	       void get()
	       {
	       cout<<"\n Enter two no \n";
	       cin>>a>>b;
	       }

	       int bigger()
	       {
			if(a>b)
			return a;
			else
			return b;
	       }
};

void main()
{
clrscr();
	       test ob;
	       ob.get();
	       cout<<"\n Bigger no is ="<<ob.bigger();

getch();
}


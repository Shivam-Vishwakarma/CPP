//private inheritance : protected member  becomes private
//public/protected inheritance : protected members become protected

#include<iostream.h>
#include<conio.h>
class A
{
protected: int a;
};
class B:public A
{
public: void show2()
	{
	a=10;
	cout<<"\n show2() display the a  "<<a;
	}
};
class C: private B           //public
{
public : void show3()
	 {
	 a=20;
	 cout<<"\n show3() display the  a  "<<a;
	 }
};
void main()
{
clrscr();
C c1;
//c1.show3();
c1.show2();
getch();
}

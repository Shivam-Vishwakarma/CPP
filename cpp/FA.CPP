#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int no=1,a;
cout<<" enter any no";
cin>>a;
tt:
no=no*a;
cout<<"\n"<<no<<endl;
a--;
if(a>0)goto tt;
getch();
}
# include <iostream.h>
# include <conio.h>
main()
{
clrscr();
int a,b,c;
cout<<"\n enter the first number";
cin>>a;
cout<<"\n enter the second number";
cin>>b;
c=a;
a=b;
b=c;
cout<<"\n the first number after swapping ="<<a;
cout<<"\n the second number after swapping ="<<b;
getch();
}
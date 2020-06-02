#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int year;
cout<<"enter any year to check if it is leap or not";
cin>>year;
if(year%4==0)
{
cout<<" year is leap";
}
else
{
cout<<"year is not leap";
}
getch();
}
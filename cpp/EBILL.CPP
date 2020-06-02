//wap to gen. elec  bill
#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
float unit, chg;
cout<<"\n enter used units ";
cin>>unit;
if(unit>=1 && unit<=100)
{
chg=unit*1;
}
if(unit>100 && unit<=500)
{
chg=100+(unit-100)*1.50;
}
if(unit>500&& unit<=2000)
chg=700+(unit-500)*1.90;
cout<<"\n your bill is "<<chg;
getch();
}



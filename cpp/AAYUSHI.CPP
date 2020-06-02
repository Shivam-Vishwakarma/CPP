#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
cout<<"enter number of weeks(1-7)";
cin>>a;
switch(a)
{
case 1:
cout<<"sunday";
break;
case 2:
cout<<"monday";
break;
case 3:
cout<<"tuesday";
break;
case 4:
cout<<"wednesday";
break;
case 5:
cout<<"thursday";
break;
case 6:
cout<<"friday";
break;
case 7:
cout<<"saturday";
break;
default:
cout<<"invalid no.";
break;
getch();
}
}
# include <iostream.h>
# include <conio.h>
void main()
{
clrscr;
int a;
cout<<"enter tne no.between 1 to 7";
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
cout<<"wedenesday";
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
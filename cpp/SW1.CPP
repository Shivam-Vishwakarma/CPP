//wap to sum of two no.
#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
float a,b,c,ans;
char ch;
cout<<"\n enter any two no. for  a and b  ";
cin>>a>>b;
cout<<"\n enter your choice from s=sum,m=multi,d=div,t=sbust.    ";
cin>>ch;
switch(ch)
{
case 's':
ans=a+b;
cout<<"\n the sum of a and b "<<ans;
break;
case 'm':
ans=a*b;
cout<<"\n the multiplication of a and b "<<ans;
break;
case 't':
ans=a-b;
cout<<"\n the substraction of a and b "<<ans;
break;
case 'd':
ans=a/b;
cout<<"\n the division of a and b "<<ans;
break;
default :cout<<"\n your choice is wrong Try Again ";
}
getch();
}


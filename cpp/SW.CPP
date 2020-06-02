//switch case
#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a=1,f,no;
cout<<"\n enter any no    ";
cin>>no;
fact:
cout<<"\n factorial of give no is"<<f;
a=a+1;
f=a*a-1;
if(a<=no) goto fact;
getch();
}

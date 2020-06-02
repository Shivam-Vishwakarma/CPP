#include<iostream.h>
#include<conio.h>
void evenodd(int a)
{
(a%2==0)?cout<<"\n even":cout<<"\n odd";
}
void main()
{
clrscr();
int x,y;
cout<<"\n enter  num : ";
cin>>x;
evenodd(x);
getch();
}

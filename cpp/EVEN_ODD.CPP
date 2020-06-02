#include<iostream.h>
#include<conio.h>
void even(int x,int y)
{
if(x%2==0&&x<=y)
{
cout<<"\t"<<x;
even(x+2,y);
}
else if(x%2)
even(x+1,y);
}
void odd(int x,int y)
{
if(x%2&&x<=y)
{
cout<<"\t"<<x;
odd(x+2,y);
}
else if(x%2==0)
odd(x+1,y);
}
void main ()
{
clrscr();
int x,y;
cout<<"Enter range x and y for even and odd nums \n";
cin>>x>>y;
cout<<"\n even nums :\n";
even(x,y);
cout<<"\n odd nums :\n";
odd(x,y);
getch();
}
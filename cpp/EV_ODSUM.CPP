#include<iostream.h>
#include<conio.h>
int even(int x,int y)
{
if(x%2==0&&x<=y)
{
return x+even(x+2,y);
}
else if(x%2)
even(x+1,y);
return 0;
}
int odd(int x,int y)
{
if(x%2&&x<=y)
{
return x+odd(x+2,y);
}
else if(x%2==0&&x<=y)
odd(x+1,y);
}
void main ()
{
clrscr();
int x,y;
cout<<"Enter range x and y for even and odd nums \n";
cin>>x>>y;
cout<<"\n even nums : "<<even(x,y);
cout<<"\n odd nums :"<<odd(x,y);
getch();
}
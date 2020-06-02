#include<iostream.h>
#include<conio.h>
int maxmin(int a,int b)
{
return a>b?a:b;
}
void main()
{
clrscr();
int x,y;
cout<<"\n enter two nums : ";
cin>>x>>y;
cout<<"\n max = "<<maxmin(x,y);
getch();
}

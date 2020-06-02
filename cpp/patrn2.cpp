//wap to print given series

/*

2 1
4 6 3 5
8 10 12 7 9 11

*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,a=2,b=1;
cout<<"Enter rows : ";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<a<<" ";
a+=2;
}
for(j=1;j<=i;j++)
{
cout<<b<<" ";
b+=2;
}
cout<<endl;
}
getch();
}
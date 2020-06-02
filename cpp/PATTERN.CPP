//wap to print following series

/*
ACEGI
ACEG
ACE
AE
A

*/


#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,s;
char a='A';
cout<<"Enter number of rows : ";
cin>>n;
for(i=n; i>=1; i--)
{
a='A';
for(j=0; j<i; j++)
{
if(j<i)
{
cout<<a<<" ";
a+=2;
}
}
cout<<"\n";
}
getch();
}
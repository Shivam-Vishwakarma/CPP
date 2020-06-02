//Write a C++ program to print PAscal Triangle of Nth term.
#include<iostream.h>
#include<conio.h>
void main( )
{
int no,i,j;
clrscr( );
cout<<"Enter the no. of term   ";
cin>>no;
//------Operation part-------
for(i=0;i<no;i++)
{
for(j=no;j>i;j--)
{
cout<<" ";
}
for(j=i-1;j>=0;j--)
{
cout<<j;
}
for(j=1;j<i;j++)
{
cout<<j;
}
cout<<"\n";
}
getch ( );
}

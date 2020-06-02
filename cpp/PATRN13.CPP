/*
to print squares of the number



25
25 16
25 16 9
25 16 9 4
25 16 9 4 1

*/


#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n;
cout<<"Enter number of rows : ";
cin>>n;
for(i=n;i>=1;i--)
{
for(j=n;j>=i;j--)
{
cout<<j*j<<" ";
}
cout<<endl;
}
getch();
}
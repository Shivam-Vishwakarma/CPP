// to print given series
/*
97531
9753
975
97
9
*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a,n;
cout<<"Enter number of rows : ";
cin>>n;
for(i=n; i>=1; i--)
{
a=2*n;
for(j=i*2; j>=1; j--)
{
if(a%2!=0)
cout<<a<<" ";
a--;
}
cout<<"\n";
}
getch();
}
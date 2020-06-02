//wap to print given series.
/*
1 3 5 7 9
1 3 5 7
1 3 5
1 3
1
1 3
1 3 5
1 3 5 7
1 3 5 7 9

*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j;
cout<<"Enter the number of rows : ";
cin>>n;
for(i=n;i>=1;i--)
{
for(j=1;j<=i*2;j=j+2)
{
cout<<j<<" ";
}
cout<<"\n";
}
for(i=2;i<=n;i++)
{
for(j=1;j<=i*2;j=j+2)
{
cout<<j<<" ";
}
cout<<"\n";
}
getch();
}


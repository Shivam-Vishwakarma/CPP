#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,k,l,m;
clrscr();
for(i=0;i<4;i++)
{
for(j=i+1;j<=4;j++)
{
cout<<j;
}
for(k=1;k<=i;k++)
{
cout<<k;
}
cout<<"\n";
for(k=i;k>=1;k--)
{
cout<<k;
}
for(j=4;j>=i+1;j--)
{
cout<<j;
}
getch();
}

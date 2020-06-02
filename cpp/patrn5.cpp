/*

*
**
*
***
*
****

*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int rows,i,j,n=2;
cout<<"Enter number of rows: ";
cin>>rows;
for(i=1;i<=rows;i++)
{
if(i%2!=0)
{
cout<<"*";
}
else
{
for(j=1;j<=n;j++)
{
cout<<"*";
}
n++;
}
cout<<endl;
}
getch();
}


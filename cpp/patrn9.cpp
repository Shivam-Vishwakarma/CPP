//wap to print given pattern
/*


*******
*****
***
*
***
*****
*******

*/


#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n;
top:
cout<<"Enter number of rows : ";
cin>>n;
if(n%2!=0)
{
cout<<"The triangle is :\n";
for(i=n;i>=1;i=i-2)
{
for(j=i;j>=1;j--)
{
cout<<"*";
}
cout<<endl;
}
for(i=3;i<=n;i=i+2)
{
for(j=i;j>=1;j--)
{
cout<<"*";
}
cout<<endl;
}
}
else
{
cout<<"You have entered even number.\nPlease enter odd number to get the desired pattern.";
goto top;
}
getch();
}

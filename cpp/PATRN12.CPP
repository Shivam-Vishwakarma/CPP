/*


*
* * *
* * * * *
* * * * * * *
* * * * *
* * *
*


*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n;
top:
cout<<"\nEnter the value of n : ";
cin>>n;
if(n%2!=0)
{
cout<<"The number triangle :\n";
for(i=1;i<=n;i=i+2)
{
for(j=i;j>=1;j--)
{
cout<<"*";
}
cout<<endl;
}
for(i=n-2;i>=1;i=i-2)
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
//wap to print given series
/*
    1
   21
  321
 4321
54321
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,s;
cout<<"Enter the value of n : ";
cin>>n;
s=n;
cout<<"The right angled triangle :\n";
for(i=1;i<=n;i++)
{
s=s-i;
for(j=i;j>=1;j--)
{
while(s>0)
{
cout<<" ";
s--;
}
cout<<j;
}
cout<<endl;
s=n;
}
getch();
}
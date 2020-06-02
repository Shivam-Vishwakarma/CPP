/*

    5
   44
  333
 2222
11111


*/


#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,s;
cout<<"Enter the value of n : ";
cin>>n;
cout<<"The number triangle :\n";
for(i=n;i>=1;i--)
{
s=i-1;
while(s>0)
{
cout<<" ";
s--;
}
for(j=i;j<=n;j++)
{
cout<<i;
}
cout<<endl;
}
getch();
}
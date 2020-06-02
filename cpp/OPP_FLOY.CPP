/*

12345
 234
  3

*/



#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a=1,b,n,s;
cout<<"Enter lines : ";
cin>>n;

for(i=n; i>=1; i--)
{
s=n-i;
while(s!=0)
{
cout<<" ";
s--;
}
for(j=1; j<i*2; j++)
{
if(j<i)
{
cout<<a;
a++;
}
else if(j==i)
{
cout<<a;
b=a;
}
else
{
++b;
cout<<b;
a--;
}
}
a++;
cout<<"\n";
}
getch();
}
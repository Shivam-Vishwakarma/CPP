#include<stdio.h>
#include<conio.h>
int p(int a,int b)
{
int c=1;
for(int i=1;i<b;i++)
c=c*a;
return c;
}
void main()
{
clrscr();
int a,t,n,sum=0;
t=a;
n=a;
for(int i=0;a;i++)
a/=10;
for(int j=1;j<=i;j++)
{
r=t%10;
sum=sum+p(r,i);
t/=10;
}
if(sum==n)
printf("\n arm");
getch();
}


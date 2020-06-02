#include<stdio.h>
#include<conio.h>
void main()
{
long long a;
int n,m,i;
clrscr();
printf("\n enter n and m of n^m : ");
scanf("%d%d",&n,&m);

for(i=1,a=1;i<=m;i++)
a*=n;
printf("\n n^m = %lld",a);
getch();
}



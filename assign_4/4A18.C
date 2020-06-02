#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
double x,n,s=1,f=1;
clrscr();
printf("\n enter x and y of x^n");
scanf("%lf%lf",&x,&n);
for(i=1;i<=n;i++)
{
f=1;

	for(j=1;j<=i;j++)
	f*=x;

s+=(f/i);
}
printf("\n sum =  %lf",s);
getch();
}
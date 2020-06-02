#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
long x,n,s=0,f=1;
clrscr();
printf("\n enter x and y of x^n");
scanf("%ld%ld",&x,&n);
for(i=0;i<=n;i++)
{       if(i%2)
	s-=f;
	else s+=f;
	f*=x;
}
printf("\n sum =  %ld",s);
getch();
}

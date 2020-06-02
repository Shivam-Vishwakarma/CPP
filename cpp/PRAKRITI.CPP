#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
long n,sum=0,t,s;
int r;
printf("\n enter a number ");
scanf("%ld",&n);
t=n;
s=n;
sum=0;
for(int i=0;n;i++)
	{
	r=n%10;
	if(r==4)
	  {
	  s=s-pow(10,i);
	  sum = sum + pow(10,i);
	  }
	n/=10;
	}
printf("\n %ld = %ld + %ld",t,s,sum);
getch();
}

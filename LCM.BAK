#include<stdio.h>
#include<conio.h>
void main()
{
long a,b,c,lcm=1;
int i;
clrscr();
printf("\n enter 3 nums : ");
scanf("%ld%ld%ld",&a,&b,&c);
for(i=2;a>1||b>1||c>1;i++)
{
	while(a%i==0||b%i==0||c%i==0)
	{
		lcm*=i;
		if(a%i==0)
		a/=i;
		if(b%i==0)
		b/=i;
		if(c%i==0)
		c/=i;

	}
}
printf("\n lcm = %ld",lcm);
getch();
}





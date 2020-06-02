#include<stdio.h>
#include<conio.h>
void main()
{
long a,b,c,hcf=1,big;
int i;
clrscr();
printf("\n enter 3 nums : \n ");
scanf("%ld%ld%ld",&a,&b,&c);
big=a>b?a>c?a:c:b>c?b:c;  //bcz of prime numbers

for(i=2;(a>1||b>1||c>1)&&i<big/2;i++)
{
	while (a%i==0&&b%i==0&&c%i==0)
	{
		hcf*=i;
		a/=i;
		b/=i;
		c/=i;
	 }

}
printf("\n hcf = %ld",hcf);
getch();
}




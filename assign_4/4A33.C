#include<stdio.h>
#include<conio.h>
void main()
{
long num,temp,sum=0,p,r;
int i,j,k;
clrscr();
printf("\n enter any num : ");
scanf("%ld",&num);
temp=num;
for(i=0;temp;i++,temp/=10);
temp=num;
for(j=1;j<=i;j++,num/=10)
{  r=num%10;
   p=1;
	for(k=1;k<=i;k++)
	p*=r;
   sum+=p;
}
if(sum==temp)
printf("\n armstrong num ");
else printf("\n not an armstrong num ");
getch();
}






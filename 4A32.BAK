#include<stdio.h>
#include<conio.h>
void main()
{
long num,sum=0,i;
clrscr();
printf("\n enter num : ");
scanf("%ld",&num);

while(num)
{ sum=0;
	while(num)
	{
	sum+=(num%10);
	printf(" %ld ",num%10);
	num/=10;
	if(num) printf("+");
	}
	printf (" = %ld \n",sum);
num=sum;
for(i=0;sum;i++,sum/=10);
if(i==1) break;
}
printf("\n\t ans : %ld",num);
getch();
}
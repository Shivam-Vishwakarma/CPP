#include<stdio.h>
#include<conio.h>
void main()
{
long num,sum=0;
clrscr();
printf("\n enter a num : ");
scanf("%ld",&num);
while(num)
{
sum += num%10;
num/=10;
}
printf("\n sum  : %ld",sum);

getch();
}
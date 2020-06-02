#include<stdio.h>
#include<conio.h>
void main()
{
long num,rev=0;
clrscr();
printf("\n enter a num : ");
scanf("%ld",&num);
while(num)
{
rev=rev*10 + num%10;
num/=10;
}
printf("\n rev  : %ld",rev);

getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
long num;
clrscr();
printf("\n enter a num : ");
scanf("%ld",&num);
while(num)
{
printf("\n\t%d",num%10);
num/=10;
}
getch();
}
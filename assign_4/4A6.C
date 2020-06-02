#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,sum=0;
clrscr();
while (i<=10)
{
sum+=i;
printf("\n\t sum = %d\t i = %d",sum,i);
i++;
}
printf("\n\n\t final sum = %d",sum);

getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
clrscr();
for(i=1;i<=100;i++)
if(i%2==0)
sum+=i;
printf("\n sum of even nums from 1 to 100 = %d",sum);
getch();
}
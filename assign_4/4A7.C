#include<conio.h>
#include<stdio.h>
void main()
{
int i,num;
clrscr();
printf("\n enter a num : ");
scanf("%d",&num);
for(i=1;i<=10;i++)
printf("\n %d * %d = %d ",num,i,num*i);

getch();
}


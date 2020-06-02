#include<stdio.h>
#include<conio.h>
void main()
{
int w;
clrscr();
printf("\n enter month number : ");
scanf("%d",&w);
switch(w)
{
case 1:printf("\n 31 ");break;
case 2:printf("\n 28 | 29 ");break;
case 3:printf("\n 31 ");break;
case 4:printf("\n 30 ");break;
case 5:printf("\n 31 ");break;
case 6:printf("\n 30 ");break;
case 7:printf("\n 31 ");break;
case 8:printf("\n 31 ");break;
case 9:printf("\n 30 ");break;
case 10:printf("\n 31 ");break;
case 11:printf("\n 30 ");break;
case 12:printf("\n 31 ");break;

default :printf("\n wrong month input !!!");
}
getch();
}
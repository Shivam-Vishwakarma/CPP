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
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:printf("\n 31 ");break;

case 4:
case 6:
case 9:
case 11:printf("\n 30 ");break;
case 2:printf("\n 28 | 29 ");break;

default :printf("\n wrong month input !!!");
}
getch();
}
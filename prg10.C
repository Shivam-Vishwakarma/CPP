#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("\n enter a integer " );
scanf("%d",&num );
num%2==0 ? printf("\n Its even !") : printf("\n Its odd !");
getch();
}
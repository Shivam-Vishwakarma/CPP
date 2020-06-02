#include<stdio.h>
#include<conio.h>
void main()
{
int year,temp;
clrscr();
printf("\n enter year (4 digit) : ");
scanf("%d",&year);

if((year%4==0&&year%100!=0)||year%400==0)
	printf("\n its leap year !");
else
	printf("\n its not a leep year !");
getch();
}





#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float p,r,t,si;
printf("\n enter principal amt. : ");
scanf("%f",&p);
printf("\n enter rate % : ");
scanf("%f",&r);
printf("\n enter time : ");
scanf("%f",&t);
si=(p*r*t)/100;
printf("\n si= %f",si);
getch();
}



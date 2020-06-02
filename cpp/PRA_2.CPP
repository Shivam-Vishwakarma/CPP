#include<stdio.h>
#include<conio.h>
int findeven (int n)
{
int r ;
while(n)
 {
 r=n%10;
 if(r%2!=0)
   return 1;
 n/=10;
 }
}

void main()
{
clrscr();
int x,y,n,cd=-1,ci=-1,iseven=1;
//char iseven = 'n';
printf("\n enter number : ");
scanf("%d",&n);
x=n;y=n;
while(iseven==1)
 {
 iseven=findeven(x);
 x--;
 cd++;
 }
iseven=1;
while(iseven==1)
 {
 iseven=findeven(y);
 y++;
 ci++;
 }
if(cd<ci)
printf("\n (-) key pressed %d times",cd);
else
printf("\n (+) key pressed %d times",ci);
getch();
}
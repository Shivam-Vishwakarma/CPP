#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,t;
printf("\n enter two nums : ");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("\n after swap : \n a=%d  b=%d ",a,b) ;
getch();
}
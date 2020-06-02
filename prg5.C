#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n enter a two nums : \n");
scanf("%d%d",&a,&b);
if(a==b)
printf("\n numbers are equal");
else if(a>b)
printf("\n %d > %d",a,b);
else
printf("\n %d > %d",b,a);
getch();
}

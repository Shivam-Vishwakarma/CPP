#include<stdio.h>
#include<conio.h>
void main()
{
int temp,a,b,c;
clrscr();
printf("\n enter 3 nums : ");
scanf("%d%d%d",&a,&b,&c);
//a>c?a>b?printf("\n %d",a):printf("\n %d ",b):c>b?printf("\n %d",c):printf("\n %d ",b);
//temp=b>c?a>b?a>c?a:c:b:c>a?c:a;
temp=a>c?a>b?a:b:c>b?c:b;
printf("\n %d is big ",temp);
getch();
}
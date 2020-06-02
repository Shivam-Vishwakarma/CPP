#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[5],i;
clrscr();
printf("\n enter 5 elements in array a : \n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("\n enter 5 elements in array b : \n");
for(i=0;i<5;i++)
{
scanf("%d",&b[i]);
c[i]=a[i]+b[i];
}
printf("\n  c : \n");
for(i=0;i<5;i++)
printf("\n\t%d",c[i]);
getch();
}
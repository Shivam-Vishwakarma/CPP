#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],i;
clrscr();
printf("\n enter 5 elements in array : \n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
b[i]=a[i];
for(i=0;i<5;i++)
{
printf("\na[%d]=%d",i,a[i]);
printf("\nb[%d]=%d",i,b[i]);
}
getch();
}
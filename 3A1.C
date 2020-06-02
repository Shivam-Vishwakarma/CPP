#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5],i;
printf("\n enter 5 elements in array : \n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("\n entered elements are : \n");
for(i=0;i<5;i++)
printf("\n\t%d",a[i]);
getch();
}




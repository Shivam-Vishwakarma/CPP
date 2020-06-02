#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,min,max;
clrscr();
printf("\n enter 5 elements in array : \n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
min=a[0];      max=a[0];
for(i=1;i<5;i++)
{
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("\n max = %d",max);
printf("\n min = %d",min);

getch();
}

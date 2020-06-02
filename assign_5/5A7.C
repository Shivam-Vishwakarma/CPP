#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,max2,max;
clrscr();
printf("\n enter 10 elements in array : \n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
max2=a[0];      max=a[0];
for(i=1;i<10;i++)
if(max<a[i])
max=a[i];
if(max2==max) max2=a[1];
for(i=1;i<10;i++)
	if(a[i]!=max)
		if(max2<a[i])
		max2=a[i];

printf("\n max2 = %d",max2);
getch();
}
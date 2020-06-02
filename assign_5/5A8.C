#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,x;
clrscr();
printf("\n enter 10 elements in array : \n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("\n Enter element to be searched : ");
scanf("%d",&x);
for(i=0;i<10;i++)
if(x==a[i])
	{
	printf("\n Found at %d",i+1);
	break;
	}
if(i==10)
printf("\n Element is not in the list ");
getch();
}
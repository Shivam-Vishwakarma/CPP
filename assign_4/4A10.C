#include<conio.h>
#include<stdio.h>
void main()

{
int i,num,max,min;
clrscr();
printf("\n enter 10 nums : ");
scanf("%d",&num);
max=num;min=num;
for(i=1;i<10;i++)
{
scanf("%d",&num);
if(max<num) max = num;
if(min>num) min = num;
}
printf("\n max = %d",max);
printf("\n min = %d",min);

getch();
}


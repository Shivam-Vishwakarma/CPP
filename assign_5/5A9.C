#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
clrscr();
printf("\n enter 9 elments :");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("\n Entered values \n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
printf("\n\t%d",a[i][j]);
getch();
}

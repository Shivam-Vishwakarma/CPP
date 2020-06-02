#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("\n enter num of rows : ");
scanf("%d",&n);
if(n<0)printf("\n only positive nums !!!");
else
for(i=n;i>0;i--)
{
	for(j=n;j>i;j--)
	printf("  ");
	for(j=0;j<i;j++)
	printf("* ");
printf("\n");
}
getch();
}

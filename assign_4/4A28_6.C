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
for(i=1;i<=n;i++)
{
	for(j=n;j>i;j--)
	printf("  ");
	for(j=1;j<2*i;j++)
	{
	if(j%2)
	printf("* ");
	else printf("  ");
	}
printf("\n");
}
getch();
}
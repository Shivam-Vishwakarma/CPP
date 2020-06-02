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
for(i=0;i<n;i++)
{
	for(j=0;j<=i;j++)
	printf("%d ",i+1);
printf("\n");
}
getch();
}

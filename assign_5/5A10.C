#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,r[3]={0},c[3]={0};
clrscr();
printf("\n enter 9 elments :");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
for(i=0;i<3;i++)
{
printf("\n");
	for(j=0;j<3;j++)
	printf("\t%d",a[i][j]);
}

for(i=0;i<3;i++)
for(j=0;j<3;j++)
	{
	r[i]+=a[i][j];
	c[i]+=a[j][i];
	}

for(i=0;i<3;i++)
{
printf("\nsum of row %d=%d",i+1,r[i]);
printf("\nsum of coloumn %d=%d",i+1,c[i]);
}
getch();
}





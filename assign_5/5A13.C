#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3]={0},i,j,k;
clrscr();
printf("\n enter 9 elmentsin matrix A :");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("\n enter 9 elmentsin matrix B :");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&b[i][j]);
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		for(k=0;k<3;k++)
		 c[i][j]+=a[i][k]+b[k][j];
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
    printf("%d\t",c[i][j]);
}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j;
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
c[i][j]=a[i][j]+b[i][j];
printf("\n matrix C :\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
    printf("%d\t",c[i][j]);
}
getch();
}
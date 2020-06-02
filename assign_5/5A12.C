#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],temp,i,j;
clrscr();
printf("\n enter 9 elments in matrix A :");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
b[i][j]=a[j][i];
printf("\n Transposed matrix of A :\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
    printf("%d\t",b[i][j]);
}
getch();
}
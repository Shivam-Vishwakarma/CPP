
#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int a[3][3],b[3][3],m[3][3]={0};
printf("\n enter 9 element in matrix A row wise :\n");
for (int i=0,c=1;i<3;i++)
for(int j=0;j<3;j++,c++)
{
printf("\n enter %d element :",c);
scanf("%d",&a[i][j]);
}
clrscr();
printf("\n enter 9 element in matrix B row wise :\n");
for ( i=0,c=1;i<3;i++)
for( j=0;j<3;j++,c++)
{
printf("\n enter %d element :",c);
scanf("%d",&b[i][j]);
}
clrscr();
printf("\n MSTRIX A = \n");
for ( i=0;i<3;i++)
{
 for( j=0;j<3;j++)
 printf("%d ",a[i][j]);
 printf("\n");
}
printf("\n MATRIX B = \n");
for ( i=0;i<3;i++)
{
 for( j=0;j<3;j++)
 printf("%d ",b[i][j]);
 printf("\n");
}
printf("\n MATRIX AxB = \n");
for ( i=0;i<3;i++)
{
 for( j=0;j<3;j++)
 {
 for(int k=0;k<3;k++)
 m[i][j]=m[i][j]+(a[i][k]*b[k][j]);
 printf("%d ",m[i][j]);
 }
 printf("\n");
}

getch();
}






#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,k=0;
clrscr();
printf("\n enter 9 elmentsin matrix A :");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
if(a[i][j]!=a[j][i]){ k=1; break;}
if(k==0)    printf("Symmetrical");
if(k==1)    printf("Unsymmetrical");
getch();
}
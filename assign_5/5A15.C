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

{
	if(i==j&&a[i][j]!=1){k=1;break;}
	else if(i!=j&&a[i][j]!=0){k=1;break;}
}
if(k==0)    printf("Identical");
if(k==1)    printf("Not an Identical");
getch();
}
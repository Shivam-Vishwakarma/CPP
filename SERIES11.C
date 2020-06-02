
#include<stdio.h>
#include<conio.h>
void main()
{
float sum=0;
int n,i,j,x,k=0;
float fact,p;
clrscr();
printf("\n enter num of terms ");
scanf("%d",&n);
printf("\n enter value of x :");
scanf("%d",&x);
for(i=0,k=0;i<n;i++,k+=2)
	   {
	     fact=1;p=1;
		for(j=1;j<=k;j++)
		{
		fact*=j;
		p=p*x;
		}
	sum=sum+(p/fact);
	}
printf("\n sum = %f",sum);
getch();
}





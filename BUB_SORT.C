#include<stdio.h>
#include<conio.h>
int bub_sort(int a[10],int n)
{
int i,j,t,ex;
for(i=0;i<n;i++)
	{
	ex=0;
	for(j=0;j<n-i-1;j++)
		if(a[j]>a[j+1])
		{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		ex++;
		}

	if(ex==0) break;
	}
	return *a;
}
void main()
{
int i, a[10]={12,34,32,43,65,45,67,89,45,76};
clrscr();
*a=bub_sort(a,10);
for(i=0;i<10;i++)
{
printf("\n%d",a[i]);
}
getch();
}

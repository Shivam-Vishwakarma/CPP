#include<stdio.h>
#include<conio.h>
int sel_sort(int a[10],int n)
{
int i,j,t,p,min;
for(i=0;i<n-1;i++)
	{
	min=a[i];
	p=i;
	for(j=i+1;j<n;j++)
		if(min>a[j])
		{
		min=a[j];
		p=j;
		}
	if(p==i) continue;
	else
	t=a[p];
	a[p]=a[i];
	a[i]=t;
	}
	return *a;
}
void main()
{
int i, a[10]={12,34,32,43,65,45,67,89,45,76};
clrscr();
*a=sel_sort(a,10);
for(i=0;i<10;i++)
{
printf("\n%d",a[i]);
}
getch();
}

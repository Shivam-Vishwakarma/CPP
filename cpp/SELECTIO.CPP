#include<iostream.h>
#include<conio.h>
void select(int a[10],int n)
{
int min,p,j,t;
for(int i=0;i<n-1;i++)
{
min=a[i];
p=i;
	for(j=i+1;j<n;j++)
		if(min>a[j])
		{
		min=a[j];
		p=j;
		}
if(i==p) continue;
t=a[p];
a[p]=a[i];
a[i]=t;
}
}

void main()
{
clrscr();
int a[10];
for(int j=0;j<7;cin>>a[j],j++);
select(a,7);
for(int i=0;i<7;i++)
cout<<endl<<a[i];
getch();
}




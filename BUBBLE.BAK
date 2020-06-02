#include<iostream.h>
#include<conio.h>
void bubble(int a[10],int n)
{
int pass=1,j,i,temp;
for(i=0;(i<n-1)&&pass==1;i++)
	{
	pass=0;
	for(j=0;j<n-i-1;j++)
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		pass=1;
		}
	}
}

void main()
{
int a[10],n;
clrscr();
cout<<"\n enter size of array  ";
cin>>n;
cout<<"\n now enter elements in array "<<endl;
for(int i=0;i<n;cin>>a[i],i++);
bubble(a,n);
cout<<"\n sorted array : ";
for(i=0;i<n;cout<<endl<<a[i],i++);
getch();
}




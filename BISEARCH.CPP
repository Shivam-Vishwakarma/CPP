#include<iostream.h>
#include<conio.h>
int bsearch(int a[50],int n,int x)
{
int low=0,high=n-1,mid;

while(low<=high)
	{
	mid=(low+high)/2;
	if(x>a[mid])
		low=mid+1;
	else if(x<a[mid])
		high=mid-1;
	else return mid;
	}
return -1;
}
void main()
{
clrscr();
int a[10]={2,7,5,9,6,34,67,90,34,21},x,b=90;
x=bsearch(a,b,0);
if(x==-1) cout<<"\n element not found !!!";
else cout<<b<<" found at "<<x;
getch();
}

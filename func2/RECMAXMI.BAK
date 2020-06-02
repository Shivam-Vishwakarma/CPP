#include<iostream.h>
#include<conio.h>
int maximum(int a[],int n)
{
static int max=a[n-1];
if(n==0) return max;
if(max<a[n-1]) max=a[n-1];
return maximum(a,n-1);
}
int minimum(int a[],int n)
{
static int min=a[n-1];
if(n==0) return min;
if(min>a[n-1]) min=a[n-1];
return minimum(a,n-1);
}
void main()
{
clrscr();
int a[11]={1,87,3,6,4,8,9,11,45,34,23};
cout<<"\n max = "<<maximum(a,11);
cout<<"\n min = "<<minimum(a,11);
getch();
}

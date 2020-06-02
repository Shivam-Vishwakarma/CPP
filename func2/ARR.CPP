#include<iostream.h>
#include<conio.h>
void arr(int a[],int n)
{
if(n==0)return;
arr(a,n-1);
cout<<endl<<a[n-1];
}
void main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
clrscr();
arr(a,10);
getch();
}
//wap to find second gratest no from given array.
#include"my.h"
main()
{
clrscr();
int a[50],i,j,n,tmp;
cout<<" \n Enter the size of the array: ";
cin>>n;
cout<<"\n Enter elements in to the array: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
  if(a[i]>a[j])
  {
  tmp=a[i];
  a[i] = a[j];
  a[j]=tmp;
  }
}}
cout<<"\n Second biggest:"<<a[n-2];
getch();
}


#include"my.h"
main(){
int a[50],size,i,j=0,big,secondbig;
cout<<" \n Enter the size of the array: ";
cin>>size;
cout<<"\n Enter elements in to the array: "<<size;
for(i=0;i<size;i++)
{
cin>>a[i];
}
big=a[0];
for(i=1;i<size;i++)
{
  if(big<a[i])
  {
  big=a[i];
  j = i;
  }
}
secondbig=a[size-j-1];
for(i=1;i<size;i++)
{
if(secondbig <a[i] && j != i)
secondbig =a[i];
}
cout<<"Second biggest:"<<secondbig;
}

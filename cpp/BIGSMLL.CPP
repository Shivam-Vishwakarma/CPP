#include"my.h"
main()
{
clrscr();
int a[5],big,small,i;
for(i=0;i<5;i++)     // input loop
{
cout<<"\n enter values in "<<i<<" array elements  ";
cin>>a[i];
}
big=a[0];
small=a[0];
for(i=0;i<5;i++)
{
cout<<"\n "<<a[i];
if(a[i]>big)
big=a[i];
if(a[i]<small)
small=a[i];
}
cout<<"\n the biggest element in  array is  "<<big;
cout<<"\n the smallest element in array is "<<small;
getch();
}


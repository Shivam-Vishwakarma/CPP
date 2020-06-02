//wap to perform Bubble Sort .
#include"my.h"
main()
{clrscr();
int a[20],s,tmp,i,j;
//cout<<"\n enter the size of array  ";
//cin>>no;
cout<<"\n enter the elements of the array \n ";
for(i=0;i<5;i++)
{
cin>>a[i];
}
//Bubble Sort Algo.
for(i=5-2;i>=0;i--)
{
for(j=0;j<=i;j++)
{
if(a[j]>a[j+1])
{
tmp=a[j];
a[j]=a[j+1];
a[j+1]=tmp;
}
}
}
cout<<"\n ========== After Bubble Sorting ============";
for(i=0;i<5;i++)
{
cout<<"\n"<<a[i];
}
getch();
}

//wap to perform Insertion Sort .
#include"my.h"
main()
{
clrscr();
int a[20],i,d,t;
//cout<<"\n enter the size of array  ";
//cin>>no;
cout<<"\n enter the 5 elements of the array \n ";
for(i=0;i<5;i++)
{
cin>>a[i];
}

for(i=1;i<=5-1;i++)
{
d=i;	//positioning element at i, by this way all the element in asending order.

while(d>0&&a[d]<a[d-1])
{
t=a[d];
a[d]=a[d-1];
a[d-1]=t;
d--;
}}
cout<<"\n sorted list in ascending order is  :  \n";
for(i=0;i<=5-1;i++)
{
cout<<"\n"<<a[i];
}
getch();
}

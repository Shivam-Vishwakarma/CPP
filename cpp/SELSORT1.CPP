//wap for SELECTION SORT.
/*
Selection sort is one of the basic algorithms for sorting data,its
simplicity proves useful for sorting small amounts of data.
Selection sort works by first starting at the beginning array (index 0)
and traverses the entire array comparing each value with the current index,
if it is smaller than the current index than that
index is saved. Once the loop has traversed all the data and if a smaller
value than the current index was found a swap is made between the current
index in the index where the smaller value was found.The current index is
then incremented, now to index 1, the algorithm repeats.
*/

#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],i,n,j,t;
cout<<"Enter The number of Element:\n";
cin>>n;
cout<<"\nEnter Elements:\n";
for(i=0;i<n;i++)
{
cout<<"\nEnter:";
cin>>a[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]<a[i]) //for descending order use if(a[j]>a[i])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
cout<<"\nAfter Sorting\n";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
getch();
}
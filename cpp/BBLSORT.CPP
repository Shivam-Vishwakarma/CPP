#include"my.h"
void bubbleSort(int a[], int n);

void bubbleSort(int a[],int n)
{
int round,i,tmp;
for(round=1;round<n-1;round++)
{
  for(i=0;i<=n-1-round;i++)
  {
     if(a[i]>a[i+1])
     {
      tmp=a[i];
      a[i]=a[i+1];
      a[i+1]=tmp;
     }
  }
}
}

void main()
{
clrscr();
int a[]={34,15,29,8,3};

bubbleSort(a,5);
for(int i=0;i<5;i++)
{
cout<<"\n "<<a[i];
}
getch();
}
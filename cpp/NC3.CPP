#include"my.h"

void sw(int a[],int n,int sp)
{
for(int k=0;k<n;k++)
{
if(k<sp)
{
a[k]=a[k]+k;
cout<<"\n sum "<<a[k];
}
else
{
a[k]=a[k]*k;
cout<<"\n multi "<<a[k];
}
}
}
/*
void disp(int a[],int n)
{
for(int k=0;k<n;k++)
(k%2==0)?cout<<a[k]<<"%":cout<<a[k]<<"\n";
}
*/
void main()
{
clrscr();
int h[]={30,40,50,20,10,5};
sw(h,6,3);
//disp(h,6);
getch();
}


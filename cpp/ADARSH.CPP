#include<conio.h>
#include<iostream.h>
void swap(int a,int b)
{
 int c;
 c=a;
 a=b;
 b=c;
 cout<<endl<<a<<b;
 }
 void main()
 {
 int i,j;
 i=20;
 j=30;
 swap(i,j);
 cout<<i<<j;
 getch();
}
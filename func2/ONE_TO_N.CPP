#include<iostream.h>
#include<conio.h>
void one_to_n(int n)
{
if(n==0) return;
one_to_n(n-1);
cout<<"\n "<<n;
}

void main()
{
clrscr();
int n;
cout<<"\n Enter num  : ";
cin>>n;
one_to_n(n);
getch();
}
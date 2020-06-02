#include<iostream.h>
#include<conio.h>
int sum(int n)
{
if(n==0) return 0;
return n+sum(n-1);
}

void main()
{
clrscr();
int n;
cout<<"\n Enter num  : ";
cin>>n;
cout<<"\n sum upto "<<n<<" = "<<sum(n);
getch();
}
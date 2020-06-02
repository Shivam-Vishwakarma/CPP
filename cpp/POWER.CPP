#include<iostream.h>
#include<conio.h>
long power(int x,int n)
{
if(n==0) return 1;
return x*power(x,n-1);
}

void main()
{
clrscr();
int x,n;
cout<<"\n Enter num and its power :";
cin>>x>>n;
cout<<"\n"<<x<<"^"<<n<<" = "<<power(x,n);
getch();
}
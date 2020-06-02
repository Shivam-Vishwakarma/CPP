#include<iostream.h>
#include<conio.h>
long r;

long rev (long n)
{
if(n==0) return 0;
r*=10;
r+=n%10;
rev(n/10);
return r;
}
void main()
{
clrscr();
long r;
cout<<"\n enter a num to reverse it : ";
cin>>r;
cout<<"reverse = "<<rev(r);
getch();
}



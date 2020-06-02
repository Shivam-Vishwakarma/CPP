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
cout<<"\n enter a num : ";
cin>>r;
if(r==rev(r)) cout<<"\n "<<r<<" is palindrome";
else cout<<"\n "<<r<<" is not palindrome";
getch();
}







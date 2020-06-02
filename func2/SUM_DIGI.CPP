#include<iostream.h>
#include<conio.h>
int sum(int n)
{
if(n==0)return 0;
return (n%10)+sum(n/10);
}
void main()
{
clrscr();
int n;
cout<<"\n Enter a num to find sum of its digits :";
cin>>n;
cout<<"\n Sum of digits of given number is = "<<sum(n);
getch();
}
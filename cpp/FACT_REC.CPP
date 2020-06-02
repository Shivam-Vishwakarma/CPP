#include<iostream.h>
#include<conio.h>
int fact(int n)
{
if(n==0)return 1;
return n*fact(n-1);
}
void main()
{
clrscr();
int n;
cout<<"\n Enter a num to find its factorial :";
cin>>n;
cout<<"\n Factorial of given number is = "<<fact(n);
getch();
}
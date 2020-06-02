//wap

/*

A
A B A
A B C B A


*/


#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n;
char a='A';
cout<<"Enter number of rows : ";
cin>>n;
cout<<a<<"\n";
for(i=1; i<n; i++)
{
a='A';
for(j=0; j<=i*2; j++)
{
if(j<i)
{
cout<<a;
a++;
}
else
{
cout<<a;
a--;
}
}
cout<<"\n";
}
getch();
}
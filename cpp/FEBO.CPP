//Write a C++ program to prin febonicc series to Nth term.
#include<iostream.h>
#include<conio.h>
void main( )
{
int no,f=0,s=0,t=1;
clrscr( );
cout<<"Enter the no. of term   ";
cin>> no;
//------Operation part-------
for(int i=0; i<no;i++)
{
cout<<"   "<<f;
f=s+t;
t=s;
s=f;
}
getch ( );
}

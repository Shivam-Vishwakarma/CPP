#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 char *p,*q;
 int i,j;
 cout<<"\n enter two strings : ";
 cin>>p>>q;
 for(i=0;p[i]!='\0';i++);
 for(j=0;q[j]!='\0'; p[i]=q[j],j++,i++);
 cout<<"\n "<<p;
 getch();
 }
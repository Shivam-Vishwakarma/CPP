#include<iostream.h>
#include<conio.h>
void main()
{
  struct simple
  {
   int p,r,t,s;
   };
  struct simple o2;
  clrscr();
  cout<<"\n Enter value of principle=  ";
  cin>>o2.p;
  cout<<"\n Enter rate=  ";
  cin>>o2.r;
  cout<<"\n Enter time given=  ";
  cin>>o2.t;
  o2.s=o2.p*o2.r*o2.t/100;
  cout<<"\n simple interst of given information is=  "<<o2.s;
  getch();
}
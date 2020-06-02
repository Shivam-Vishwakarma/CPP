#include<iostream.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n=1;
 while(n<=10)
{ cin>>i;
  sound(250*i);
  delay(250);
  nosound();
  }
  getch();
  }
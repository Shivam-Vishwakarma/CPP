#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
void main()
{
 int a,i;
 i=1;
 while(i<=2)
 {
  cin>>i;
  sound(i*260);
  delay(260);
  nosound();
  if(i==0) goto kk;
  }
  kk:
  getch();
  }
#include<iostream.h>
#include<conio.h>
void main()
{  clrscr();
  int a[5],i,b=0,c=0;
  for(i=0;i<=5;i++)
  {
   cout<<"\n \t ENTER "<<i<<" : ";
   cin>>a[i];
   }
   kk:
   {
    while(c<=5)
    {
     if (a[b]>=a[c])
     {
      c++;
      }
      else if (a[b]<=a[c])
      {
       b++;
       goto kk;
       }
       }
       }
       cout<<"\n \t GREATER : "<<a[b];
       getch();
       }
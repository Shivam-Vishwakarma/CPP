#include <stdlib.h>
#include <stdio.h>
#include<iostream.h>
#include"my.h"


int main(void)
{                          clrscr();
   int i,a,b,c;


   for(i=0; i<10; i++)

     {b= rand() % 10    ;c=rand() % 10;

     cout<<"\n what is "<<b<<" times "<<c<<" ? : ";
      cin>>a;
      if(a==b*c)
      cout<<"\n good ";
      else
      cout<<"\n try again\n\n";
    }         getch();
   return 0;
}


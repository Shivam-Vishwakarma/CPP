#include"my.h"
main()
{
clrscr();
long a,b,c,t,n;
printf("\n enter a num : ");
scanf("%ld",&n);
 t=n;
 a=t%10;
 t/=10;
 c=0;
 while(t!=0)
 {
 b=t%10;
 if(a>=b)
 a=b;
 else
 c++;
 t/=10;
 }
   if(c==0)
   printf("\n %ld is a tidy num ",n)       ;
   else
   printf("\n %ld is not a tidy num ",n)     ;

getch();
}





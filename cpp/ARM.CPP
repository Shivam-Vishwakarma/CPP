#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{      clrscr();
long num,n,t,s,sum,r,c=0;
printf("\n entre num of terms  : ");
scanf("%ld",&num);
for(n=1;c<=num;n++)
{
 sum=0;
 t=n;
 s=n;
 for(int i=0;t!=0;i++,t/=10);
 for( int j=0;j<i;j++)
 {
  r=s%10;
  s/=10;
  sum+=pow(r,i);
 }
 if(sum==n)
 {
 printf("\n %ld ",n);
  c++;
 }
}//
getch();
}






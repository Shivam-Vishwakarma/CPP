#include<stdio.h>
#include<conio.h>
void prime(int a)
{
  int i,f=0;
for(i=2;i<=a/2;i++)
 {if(a%i==0)
  f++;
  }
  if(f)printf("no is not prime");
  else printf("no is prime");
}
void main()
{int a;
clrscr();
printf("enter num ");
scanf("%d",&a);
prime(a);
getch();
}






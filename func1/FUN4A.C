#include<stdio.h>
#include<conio.h>
void prime()
{
int f=1,a,i;
printf("enter num ");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
 {if(a%i==0)
  f++;
  }
  if(f)printf("no is prime");
  else printf("no is not prime");
}
void main()
{
clrscr();
prime();
getch();
}






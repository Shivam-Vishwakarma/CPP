#include<stdio.h>
#include<conio.h>
int prime(int a)
{
  int i,f=0;
for(i=2;i<=a/2;i++)
  { if(a%i==0)
    f++;
  }
return f;
}
void main()
{int a,f;
clrscr();
printf("enter num ");
scanf("%d",&a);
f=prime(a);
if(f)printf("no is not prime");
else printf("no is prime");
getch();
}






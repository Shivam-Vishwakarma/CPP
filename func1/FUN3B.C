#include<stdio.h>
#include<conio.h>
int fact(int a)
{
  int i,f=1;
for(i=1;i<=a;i++)
  f=f*i;
// printf("factorial = %d",f);
return f;
}
void main()
{int a,f;
clrscr();
printf("enter num ");
scanf("%d",&a);
f=fact(a);
printf("factorial = %d",f);
getch();
}






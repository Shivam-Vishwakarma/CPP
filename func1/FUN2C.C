#include<stdio.h>
#include<conio.h>
float area(int a)
{
  float area;
area = 3.14*a*a;
return area;
  }

void main()
{int a,f;
clrscr();
printf("enter num ");
scanf("%d",&a);
printf("area =%f",area(a));
getch();
}






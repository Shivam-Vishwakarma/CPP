#include<stdio.h>
#include<conio.h>
void area(int a)
{
  float area;
area = 3.14*a*a;
  printf("area = %f",area);
  }

void main()
{int a;
clrscr();
printf("enter num ");
scanf("%d",&a);
area(a);
getch();
}






#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
int ch;
clrscr();
printf("\n enter your choice : \n 1. add\n 2. sub \n 3. mutiply \n 4.div \n\t :");
scanf("%d",&ch);
printf("\n enter two nums : ");
scanf("%f%f",&a,&b);
switch(ch)
{
case 1 :c = a + b;
	printf("\n ans = %f",c);
	break;
case 2 :c = a - b;
	printf("\n ans = %f",c);
	break;
case 3 :c = a * b;
	printf("\n ans = %f",c);
	break;
case 4 :c = a / b;
	printf("\n ans = %f",c);
	break;
default: printf("\n wrong choice ");
}
getch();
}

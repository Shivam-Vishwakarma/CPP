#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
char ch;
clrscr();
printf("\n enter your choice : \n + add\n - sub \n * mutiply \n / div \n\t :");
scanf("%c",&ch);
printf("\n enter two nums : ");
scanf("%f%f",&a,&b);
switch(ch)
{
case '+' :c = a + b;
	printf("\n ans = %f",c);
	break;
case '-' :c = a - b;
	printf("\n ans = %f",c);
	break;
case '*' :c = a * b;
	printf("\n ans = %f",c);
	break;
case '/' :c = a / b;
	printf("\n ans = %f",c);
	break;
default: printf("\n wrong choice ");
}
getch();
}

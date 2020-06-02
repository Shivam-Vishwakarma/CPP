#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("\n enter a char ");
scanf("%c",&c);
switch((c>=65&&c<=90)||(c>=97&&c<=122))
{
case 1: printf("\n its an alphabet");break;
case 0: printf("\n its a char ");
}
getch();
}




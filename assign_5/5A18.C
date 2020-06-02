#include<conio.h>
#include<stdio.h>
void main()
{
char a;
clrscr();
printf("\n enter a char : ");
scanf("%c",&a);
if((a>=97&&a<=122)||(a>=65&&a<=90))
switch(a)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':  printf("\n It's a vowel ");break;
default :  printf("\n It's a consonent ");
}

getch();
}






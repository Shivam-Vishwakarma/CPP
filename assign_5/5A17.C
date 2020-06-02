#include<conio.h>
#include<stdio.h>
void main()
{
int a;
clrscr();
a='Z';

printf("\n enter a char : ");
scanf("%c",&a);
if(a>=97&&a<=122)
{ a-=32;
  printf("\n case change to : %c",a); }
else if(a>=65&&a<=90) {
 a+=32;
   printf("\n case change to : %c",a);
}
else
  printf("\n Not an alphabet");
getch();
}






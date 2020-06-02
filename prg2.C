#include<stdio.h>
#include<conio.h>
void main()
{  char ch;
clrscr();
printf("\n enter a char : ");
scanf("%c",&ch);
if ((ch>96&&ch<123)||(ch>64&&ch<91))
printf("\n ITS AN ALPHABET");
else
printf("\n ITS NOT AN ALPHABET ");

getch();
}


#include<stdio.h>
#include<conio.h>
void main()
{
char name[10];
int i;
clrscr();
printf("\n Enter a string : ");
scanf("%s",name);
for(i=0;name[i]!='\0';i++);
printf("\nLength of string =  %d",i);

getch();
}



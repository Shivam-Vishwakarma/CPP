#include<stdio.h>
#include<conio.h>
void main()
{
char name[10];
int i,j;
clrscr();
printf("\n Enter a string : ");
scanf("%s",name);
for(i=0;name[i]!='\0';i++)
{
	for(j=0;j<=i;j++)
	printf("%c",name[j]);
printf("\n");
}
getch();
}



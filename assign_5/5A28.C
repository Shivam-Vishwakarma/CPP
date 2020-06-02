#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,j,k,t=0;
clrscr();
printf("\n Enter a string : ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++);
for(j=0,k=i-1;j<i/2;j++,k--)
	if(a[j]!=a[k])
	{printf("\nIts not a palindrome"); t=1; break;}
if(t==0)
printf("\nIts a palindrome");

getch();
}



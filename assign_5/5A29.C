#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int i,j,k,t=0;
clrscr();
printf("\n Enter a string : ");
scanf("%s",a);
strcpy(b,a);
strrev(a);
for(i=0;b[i]!=0;i++)
if(a[i]!=b[i])
{printf("\nIts not a palindrome");t=1;break;
}
if(t==0)
printf("\nIts a palindrome");

getch();
}



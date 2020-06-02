#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],t;
int i,j,l,k;
clrscr();
printf("\n Enter a string : ");
gets(a);
l=strlen(a);
for(i=0;i<strlen(a)/2;i++,l--)
{
t=a[i];
a[i]=a[l-1];
a[l-1]=t;
}
printf("\n rev = %s ",a);
getch();
}



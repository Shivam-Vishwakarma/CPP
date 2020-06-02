#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i,j,w=0;
clrscr();
printf("\n Enter two string : ");
gets(a);
gets(b);

for(i=0;a[i]!='\0';i++)
if(a[i]!=b[i])
{
printf("\n not equal ");w=1;break;
}
if(w==0)
printf("\n strings are equal ");
getch();
}



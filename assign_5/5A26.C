#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
int i,j,l;
clrscr();
printf("\n Enter a string : ");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
 if(a[i-1]=='\0'||a[i-1]==32)
	{
	if(a[i]>=97&&a[i]<=122)
	a[i]-=32;
	}
 else if(a[i]>=65&&a[i]<=90)
	a[i]+=32;
printf("%c",a[i]);

}

getch();
}



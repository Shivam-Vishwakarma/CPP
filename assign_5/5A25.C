#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,j,v=0,c=0;
clrscr();
printf("\n Enter a string : ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
 if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122));
 {
 if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
  v++;
  else c++;
  }
}
printf("\n vowels = %d",v);
printf("\n consonants = %d",c);

getch();
}



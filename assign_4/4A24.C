#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,n,i,nxt=0;
clrscr();
printf("\n enter n : ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{

printf("\t%d",nxt);
a=b;
b=nxt;
nxt=a+b;

}
getch();
}
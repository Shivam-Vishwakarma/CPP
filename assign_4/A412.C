// 1+2+3+4+....+n
#include<stdio.h>
#include<conio.h>
void main()
{
long ans=0;
int num,i;
clrscr();
printf("\n enter a num : ");
scanf("%d",&num);
for(i=1;i<=num;i++)
ans+=i;
printf("\n 1+2+3+...+%d = %ld ",num,ans);
getch();
}

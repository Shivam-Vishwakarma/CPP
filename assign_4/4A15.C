#include<stdio.h>
#include<conio.h>
void main()
{
double ans=0;
float num,i;
clrscr();
printf("\n enter a num : ");
scanf("%f",&num);
for(i=1;i<=num;i++)
ans+=(i/i+1);
printf("\n 1/2+ 2/3 + 3/4 +...+ %f/%f = %lf ",num,num+1,ans);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
long long dec=0,oct,temp, i,j=1;
clrscr();
printf("\n enter a oct num : ")  ;
scanf("%lld",&oct);
temp=oct;
while(oct)
{
i=oct%10;
dec+=(i*j);
oct/=10;
j*=8;
}
printf("\n dec equivalent of %lld = %lld",temp,dec);
getch();
}
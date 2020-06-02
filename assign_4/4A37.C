#include<stdio.h>
#include<conio.h>
void main()
{
long long dec,oct=0,temp, i,j=1;
clrscr();
printf("\n enter a dec num : ")  ;
scanf("%lld",&dec);
temp=dec;
while(dec)
{
i=dec%8;
oct+=(i*j);
dec/=8;
j*=10;
}
printf("\n octal equivalent of %lld = %lld",temp,oct);
getch();
}

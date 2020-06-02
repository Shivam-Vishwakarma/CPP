#include<stdio.h>
#include<conio.h>
void main()
{
long long dec=0,bin,temp, i,j=1;
clrscr();
printf("\n enter a bin num : ")  ;
scanf("%lld",&bin);
temp=bin;
while(bin)
{
i=bin%10;
dec+=(i*j);
bin/=10;
j*=2;
}
printf("\n bin equivalent of %lld = %lld",temp,dec);
getch();
}

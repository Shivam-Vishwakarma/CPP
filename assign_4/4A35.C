#include<stdio.h>
#include<conio.h>
void main()
{
 long long dec,bin=0,temp, i,j=1;
clrscr();
printf("\n enter a dec num : ")  ;
scanf("%lld",&dec);
temp=dec;
while(dec)
{
i=dec%2;
bin+=(i*j);
dec/=2;
j*=10;
}
printf("\n bin equivalent of %lld = %lld",temp,bin);

getch();
}


#include<stdio.h>
#include<conio.h>
void main()
{
long num,r,temp,s=0;

clrscr();
printf("\n enter a 5 digit num : ");
scanf("%ld",&num);
temp=num;
if(temp)
{
r=temp%10;
s=s*10+r;
temp/=10;

if(temp)
{
r=temp%10;
s=s*10+r;
temp/=10;
if(temp)
{
r=temp%10;
s=s*10+r;
temp/=10;
if(temp)
{
r=temp%10;
s=s*10+r;
temp/=10;
if(temp)
{
r=temp%10;
s=s*10+r;
temp/=10;
}
}
}
}
} printf("%ld",s);
getch();
}

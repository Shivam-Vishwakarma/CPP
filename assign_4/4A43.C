#include<stdio.h>
#include<conio.h>
void main()
{
long num,rev=0,temp;
printf("\n enter a num : ");
scanf("%ld",&num);
temp = num;
while(num)
{
rev=(rev*10) +  (num%10);
num/=10;
}
if(rev==temp)
printf("\n palindrome ");
getch();
}

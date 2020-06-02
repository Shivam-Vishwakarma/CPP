#include<stdio.h>
#include<conio.h>
void main() {
long num;
int i,k=0;
clrscr();
printf("\n enter a num : ");
scanf("%ld",&num);
for(i=2;i<=num/2;i++)
	if(num%i==0)
	{   k=1;
	    break;
	}

if(!k)
printf("\n its a prime num ");
else printf("\n its not a prime ");

getch();
}

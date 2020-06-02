#include<stdio.h>
#include<conio.h>
long *fact(int *n)
{
static long f;
int i;
for(i=1,f=1;i<=*n;i++)
f*=i;
return &f;
}
void main()
{
int n1;
long *fa;
clrscr();
printf("\n enter a num ");
scanf("%d",&n1);
fa=fact(&n1);
printf("\n fact of given num is : %ld",*fa);
getch();
}




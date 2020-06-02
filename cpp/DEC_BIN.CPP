#include"my.h"
main()
{
clrscr();
int d,a,s=0,r,k;
printf("\n ENTER A DEC NO : ");
scanf("%d",&d);
a=d;
while(a<0)
{
r=a%2;
a/=2;
s=s*10+r;
}
printf("\n BIN. EQ OF %d = %d ");
getch();
}






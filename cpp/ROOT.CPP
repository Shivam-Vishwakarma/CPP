//wap to sum of two no.

#include"my.h"
main()
{
clrscr();
float a,b,c,r1,r2;
printf("\n enter a,b,c for the eq. ax^2+bx=c=0 \n");
scanf("%f%f%f%f",&a,&b,&c);
r1=(-b+sqrt(b*b - 4*a*c))/2*a;
printf("\n root of given eq. is : %f ",r1);
getch();
}








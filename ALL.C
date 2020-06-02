#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int a,b,c;
float p,q,r;
long l,m,n;
double x,y,z;
printf("\n enter two nums : \n");
scanf("%d%d",&a,&b);
c=a+b;
printf("\n %d + %d = %d",a,b,c);
printf("\n enter two nums : \n");
scanf("%ld%ld",&l,&m);
n=l-m;
printf("\n %ld - %ld = %ld",l,m,n);
printf("\n enter two nums : \n");
scanf("%f%f",&p,&q);
r=p*q;
printf("\n %f * %f = %f",p,q,r);
printf("\n enter two nums : \n");
scanf("%lf%lf",&x,&y);
z=x/y;
printf("\n %lf + %lf = %lf",x,y,z);

getch();
}

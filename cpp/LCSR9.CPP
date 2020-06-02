#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x,y=-3,z;
clrscr();
for(x=1;x<=5;x+=0.5)
{
z=(2*pow(x,2))+(3*pow(y,2))+(5*x*y);
printf("\n\n x=%f",x);
printf("\t y=%f",y);
printf("\t z=%f",z);
if(y<3) y++;

}
getch();
}


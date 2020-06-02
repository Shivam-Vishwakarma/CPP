#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,ls,rs;
clrscr();
printf("\n enter a num : ");

scanf("%u",&a);
printf("\n enter bit shift : " );
scanf("%d",&b);
rs=a>>b;
ls=a<<b;
printf("\n right shift ( >> ) : %u",rs);

printf("\n left shift ( << )  : %u",ls);

printf("\n\n\n compliment ( ~ ) : %u",~a);
getch();
}

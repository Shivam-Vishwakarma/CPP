#include<conio.h>
#include<stdio.h>

void main()
{
float m1,m2,m3,m4,m5,per,max;
clrscr();
printf("\n enter marks of 5 subjects : \n");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
if(m1>100||m2>100||m3>100||m4>100||m5>100)
printf("\n marks can not be > 100 !!!" );
else
{
printf("\n enter max marks per subject : ");
scanf("%f",&max);
per=((m1+m2+m3+m4+m5)*100)/(max*5);
printf("\n your percentage is : %f",per);

if(per>=80&&per<=100)
	printf("\n MERIT !!!");
else if(per>=60&&per<=79)
	printf("\n 1st DIVISION ");
else if(per>=50&&per<=59)
	printf("\n 2nd DIVISION ");
else if(per>=40&&per<=49)
	printf("\n 3rd DIVISION ");
else
	printf("\n FAIL !!! ");
}
getch();
}


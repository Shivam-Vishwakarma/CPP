//1+x/1!+x^3/3!+.........
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,x;
double s=1,f,p;
clrscr();
printf("\n enter x and n : ");
scanf("%d%d",&x,&n);
for(i=1;i<=n;i+=2)
	{
	p=1;f=1;
	for(j=1;j<=i;j++)
		p*=x;
	for(j=1;j<=i;j++)
		f*=j;
	s=s+p/f;
	}
printf("\n sum = %lf",s);
getch();
}



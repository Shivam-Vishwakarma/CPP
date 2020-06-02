#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter 3 nums : ");
scanf("%d%d%d",&a,&b,&c);
switch(a>b)
{
	case 1:switch(a>c)
		{
		case 1: printf("\n %d ",a);break;
		case 0: printf("\n %d ",c);break;
		} break;

	case 0:switch(b>c)
		{
		case 1: printf("\n %d ",b);break;
		case 0: printf("\n %d ",c);break;
		}break;
}
getch();
}




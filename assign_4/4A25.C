#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,j,k=0;
clrscr();
printf("\n enter n : ");
scanf("%d",&num);
for(i=2;i<=num;i++)
	{   k=0;
	for(j=2;j<=i/2;j++)
	      {	if(i%j==0)
		{
		k=1;
		break;
		}
		if(j>3)
		j++;
	      }
	      if(!k)
	      printf("\t%d",i);

	}
getch();
}



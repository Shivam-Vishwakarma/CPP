#include<stdio.h>
#include<conio.h>
void main()

{
char a[5][100];
int i,j,p,q;

clrscr();
printf("\nEnter 5 lines \n");
for(i=0;i<5;i++)
gets(a[i]);
for(i=0;i<5;i++)
	for(j=0;a[i][j]!='\0';j++)
	{
	 if(a[i][j-1]==32&&a[i][j]==32)
	     {
		     for(q=j-1;a[i][q]!='\0';q++)
				a[i][q]=a[i][q+1];

	     }
	}
for(i=0;i<5;i++)
{
printf("\n");
for(j=0;a[i][j]!='\0';j++)
	printf("%c",a[i][j]);

}
getch();
}




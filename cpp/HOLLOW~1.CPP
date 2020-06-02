#include<stdio.h>
#include<conio.h>

int main()
{           clrscr();
    int i, j, N;
    printf("Enter number of rows: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
	for(j=1; j<=N; j++)
	{
	    if(i==1 || i==N || j==1 || j==N)
	    {
		// Print star for 1st, Nth row and column
		printf("* ");
	    }
	    else
	    {
		printf("  ");
	    }
	}
	printf("\n");
    }

getch();
}

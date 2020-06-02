#include<stdio.h>
#include<conio.h>
void get_matrix(int x[10][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&x[i][j]);

}
void put_matrix(int x[10][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("%d",x[i][j]);
		printf("\t");
		}
	printf("\n");
	}
}
void add_matrix(int x[10][10],int y[10][10],int z[10][10],int m,int n)
{

int i,j;
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	z[i][j]=x[i][j]+y[i][j];



}

void main()
{
int m,n,a[10][10],b[10][10],c[10][10];
clrscr();
printf("Enter the size of matrix (m * n) : ");
scanf("%d%d",&m,&n);
printf("\n enter matrix A : \n");
get_matrix(a,m,n);
printf("\n enter matrix b : \n");
get_matrix(b,m,n);
add_matrix(a,b,c,m,n);
clrscr();
printf("Matrix A = \n");
put_matrix(a,m,n);
printf("Matrix b = \n");
put_matrix(b,m,n);
printf("Sum of matrix A and B = \n");
put_matrix(c,m,n);

getch();
}
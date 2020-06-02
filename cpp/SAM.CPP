#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int i,j;
int a[3][3],b[3][3],c[3][3];
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{cout<<"enter the value for matrix a=";
cin>>a[i][j];
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{cout<<"enter values for matrix b=";
cin>>b[i][j];
}
}
c[i][j]=a[i][j]+b[i][j];
}

#include"my.h"
main()
{
clrscr();

int a[3][3],b[3][3],c[3][3],r,j;
for(r=0;r<3;r++)
{
    for(j=0;j<3;j++)
    {
    cout<<"\n enter values in A array element ";
    cin>>a[r][j];
    }
}
for(r=0;r<3;r++)
{
    for(j=0;j<3;j++)
    {
    cout<<"\n enter values in B array element " ;
    cin>>b[r][j];
    }
}
for(r=0;r<3;r++)
{
    for(j=0;j<3;j++)
    {
    c[r][j]=a[r][j]+b[r][j];
    }
}
cout<<"\n the sum of 2D is  ";
for(r=0;r<3;r++)
{
    for(j=0;j<3;j++)
    {
    cout<<"\n"<<c[r][j];
    }
}
getch();
}



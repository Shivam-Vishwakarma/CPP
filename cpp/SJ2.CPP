#include<iostream.h>
#include<conio.h>
main()
{
clrscr();












long no;
int i,j,k,l;
cout<<"enter no";
cin>>no;
for(i=1;i<=no;i++)
{
for(j=1;j<=i;j++)
{
cout"*";
}
cout<<"\n";
}
for(k=no;k>1;k--)
{
for(l=1;l<=k;l++)
{
cout<<"*";
}
cout<<"\n"
}
getch();
}
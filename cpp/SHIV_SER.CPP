#include<iostream.h>
#include<conio.h>
main()
{
clrscr();long no;
cout<<"\n enter no of rows : ";

cin>>no;
for(int i=1;i<=no;i++)
	{
	for(int j=1;j<=i;j++)
	{
	cout<<"*";
	}
	cout<<"\n";
	}
for(int k=no;k>=1;k--)
	{
	for(int l=1;l<=k;l++)
	{
	cout<<"*";
	}
	cout<<"\n";
	}
getch();
}
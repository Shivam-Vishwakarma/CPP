#include<iostream.h>
#include<conio.h>
int &star(int s )
{
for(static int i=0;i<s;i++,cout<<endl)
	for(int j=0;j<i;j++,cout<<" *");
return i;
}

void main()
{
 clrscr();
 cout<<"\n Num of rows : "<<star(9);
 getch();
}

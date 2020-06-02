#include<iostream.h>
#include<conio.h>

void primenum(int x,int y)
{

for(int i=x,f=0;i<=y;i++,f=0)
{
for(int j=2;j<=i/2;j++)

	{
		if(i%j==0)
		{
		f=1;
		break;
		}

	}
if(f==0) cout<<"\n"<<i<<" is prime";
}
}

void main()
{
clrscr();
int x,y;
cout<<"\n enter range x,y: ";
cin>>x>>y;
primenum(x,y);
getch();
}




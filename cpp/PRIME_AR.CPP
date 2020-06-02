#include<iostream.h>
#include<conio.h>
void prime(int n)
{
int flag=0;
for(int i=2;i<=n/2;i++)
	if(n%i==0)
	    {
	    flag=1;break;
	    }
if(flag==0) cout<<"\n"<<n<<" is prime";
}

void armst(int n)
{
int r,temp=n,sum=0,pow;
for(int i=0;temp;i++,temp/=10);
temp=n;
while(temp)
{
r=temp%10;
temp/=10;
pow=1;
	for(int j=0;j<i;j++)
	pow*=r;
sum+=pow;
}
if(sum==n) cout<<"\n"<<n<<" is armstrong num ";
}

void main()
{
clrscr();
armst(153);
prime(61);
getch();
}

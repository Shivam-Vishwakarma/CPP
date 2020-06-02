#include<iostream.h>
#include<conio.h>
int fact(int n)
{
int fac=1;
for(int i=1;i<=n;fac*=i,i++);
return fac;
}
void strongnum(int a)
{
int temp=a,r,sum;

for(sum=0;temp!=0;temp/=10)
{
r=temp%10;
sum+=fact(r);
}
if(sum==a) cout<<"\n"<<a<<" is a strong num ";
else cout<<a<<" is not an strong num";

}

void main()
{
clrscr();
int n;
cout<<"\n enter a num : ";
cin>>n;
strongnum(n);  //145 is strong num
getch();
}





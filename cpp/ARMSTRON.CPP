#include<iostream.h>
#include<conio.h>
#include<math.h>
void arms(int n)
{
int r,sum=0,temp;
temp=n;

for(int c=0;temp;c++,temp/=10);
temp=n;
for(int i=0;temp;i++)
{
r=temp%10;
temp/=10;
sum+=pow(r,c);
}
if(sum==n) cout<<"\n "<<n<<" is armstrong";

}
void range(int x,int y)
{
while(x<=y)
{
 arms(x);
 x++;
}
}
void main()
{
clrscr();
int x,y;
cout<<"\n enter range : ";
cin>>x>>y;
range(x,y);
getch();
}
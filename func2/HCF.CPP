#include<iostream.h>
#include<conio.h>
int hcf(int a,int b)
{
if(b==0) return a;
return hcf(b,a%b);
}
void main()
{
clrscr();
int x,y;
cout<<"\n Enter two num :\n";
cin>>x>>y;
cout<<"HCF of "<<x<<" and "<<y<<" is = "<<hcf(x,y);
getch();
}




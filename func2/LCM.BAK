#include<iostream.h>
#include<conio.h>

int lcm(int a, int b);
void main()
{
clrscr();
int num1, num2, ans;
cout<<"Enter any two numbers to find lcm: ";
cin>>num1>>num2;

if(num1 > num2)
  ans = lcm(num2, num1);
else
  ans = lcm(num1, num2);
cout<<"\n LCM of "<<num1<<" and "<<num2<<" is = "<<ans;
getch();
}

int lcm(int a,int b)
{
static int m = 0;
m+=b;
//cout<<" m = "<<m<<endl;
if((m%a == 0) && (m%b == 0))
    {
	  return m;
    }
    else
    {
	  return lcm(a,b);
    }
}
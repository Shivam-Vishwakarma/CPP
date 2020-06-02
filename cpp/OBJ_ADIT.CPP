/*
wap to perform + of 2 objects and store the result in third object.and
display contents of all the three objects.
*/
#include"my.h"

class num
{
public: int x,y;
num()
{

}
num(int a,int b)
{
x=a;
y=b;
}
void show()
{
cout<<"\n the value of x is  "<<x;
cout<<"\n the value of y is  "<<y;
}
};
void main()
{
clrscr();
num n1(2,5),n2(5,9),n3;
n1.show();
n2.show();
n3.x=n1.x+n2.x;
n3.y=n1.y+n2.y;
n3.show();
//getch();
}





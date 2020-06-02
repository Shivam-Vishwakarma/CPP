#include<iostream.h>
#include<conio.h>
class pen
{
int price ;
public:
pen(int);
void disp();
friend int operator+(int , pen&);
};

pen :: pen(int q)
{
price=q;
}
int operator+(int a, pen &x)
{
x.price += a;
return x.price;
}
void pen :: disp()
{
cout<<endl<<"price : "<<price;
}

void main()
{
clrscr();
pen s(10);

s.disp();
5+s;
s.disp();
getch();
}




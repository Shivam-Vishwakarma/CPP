#include<iostream.h>
#include<conio.h>
class io
{
int a;
float b;
public:
friend void operator<<(ostream&, io);
friend void operator>>(istream&, io&);
io(int, float);
};
io :: io(int x, float y)
{
a=x;
b=y;
}
void operator<<(ostream &in ,io c)
{
in<<c.a<<endl<<c.b;
}
void operator>>(istream &in ,io &c)
{
in>>c.a>>c.b;
}

void main()
{
clrscr();

io a(2,4.5),b(4,5.5);
cin>>b;
cout<<b;

getch();
}
#include<iostream.h>
#include<conio.h>
class a;
class b
{
int s;
float d;
public:
friend void out( a, b);
};
class a
{
int x;
float y;
public:
friend void out(a, b);
};
void out(a q, b p)
{
p.s=10;p.d=2.2;q.x=30;q.y=8.8;
cout<<"\n MEMBERS OF A  : "<<endl;
cout<<p.s<<endl<<p.d<<endl;
cout<<" MEMBERS OF B : "<<endl;
cout<<q.x<<endl<<q.y ;
}

void main()
{
clrscr();
a w;
//w.s=10;w.d=9.8;

b r;
//r.x=20;
//r.y=8.8;
out(w, r);
getch();
}
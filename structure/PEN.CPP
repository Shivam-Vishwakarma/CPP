#include<iostream.h>
#include<conio.h>
#include<string.h>

class pen
{
public:
char name[10];
float price;
pen addpen(pen,pen);
pen subpen(pen);
pen* newpen();
void changepen(pen&);
void show();
};

pen pen :: addpen(pen a, pen b)
{
price = a.price + b.price;
return *this;
}
pen pen :: subpen(pen x)
{
price -= x.price;
return *this;
}

pen* pen :: newpen()
{

this->price = 0;
strcpy(name, "");
return this;
}

void pen :: changepen(pen &q)
{
this->price = q.price;
strcpy(this->name, q.name);
}
void pen :: show()
{
cout<<endl<<"PRICE = "<<price ;
}

void main()
{
clrscr();
pen p1,p2,p3,p4;
p1.price = 10;
p2.price = 15;
strcpy(p1.name,"cello")  ;
strcpy(p2.name,"flair")  ;
p3.newpen();
p3=p3.addpen(p1,p2);
p4=p4.addpen(p1,p2);
p2.changepen(p4);
p1.show();
p2.show();
p3.show();
p4.show();
getch();

}
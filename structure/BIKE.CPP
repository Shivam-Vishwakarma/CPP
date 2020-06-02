#include<iostream.h>
#include<conio.h>
#include<string.h>

class bike
{

public:
char name[10];
int rpm;
float speed,price;


void getnewbike(bike&);
void add(bike);
void add(bike, bike);
int getprice(bike);
void show();
};
void bike :: getnewbike(bike &a)
{
strcpy(this->name, a.name);
rpm = a.rpm;
speed = a.speed;
price = a.price;
}

void bike :: add(bike q)
{
this-> rpm = this-> rpm + q.rpm;
this->speed += q.speed;
this->price += q.price;
}

void bike :: add(bike a, bike b)
{
this->rpm = a.rpm + b.rpm;
this->speed = a.speed + b.speed;
this->price = a.price + b.price;
}
int bike :: getprice(bike a)
{
return a.price ;
}

void bike :: show()
{
cout<<endl<<"NAME = "<<name<<"\t SPEED = "<<speed<<"\t RPM = "<<rpm<<"\t PRICE = "<<price;
}

void main()
{
clrscr();
bike b1,b2,b3;
strcpy(b1.name,"KTM");
strcpy(b2.name,"KAWASAKI");
b1.speed = 50;
b2.speed = 40;
b1.rpm = 100;
b2.rpm = 70;
b1.price = 100000;
b2.price = 250000;
b3.getnewbike(b1);
b3.show();
strcpy(b3.name, "NINJA");
b3.add(b2);
b3.show();
b3.add(b2,b1);
b3.show();
cout<<endl<<b3.getprice(b3);
getch();

}









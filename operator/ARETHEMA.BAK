#include<iostream.h>
#include<conio.h>

typedef class calculator
{
public:
int a;
float b;

calculator operator+(calculator);
calculator operator-(calculator);
calculator operator*(calculator);
calculator operator/(calculator);
calculator operator=(calculator);
void disp();

} cal;
calculator calculator :: operator+ (calculator o)
{
cal q;
q.a = this->a + o.a;
q.b = this->b + o.b;
return q;
}
calculator calculator :: operator- (calculator o)
{
cal q;
q.a = this->a - o.a;
q.b = this->b - o.b;
return q;
}
calculator calculator :: operator* (calculator o)
{
cal q;
q.a = this->a * o.a;
q.b = this->b * o.b;
return q;
}
calculator calculator :: operator/ (calculator o)
{
cal q;
q.a = this->a / o.a;
q.b = this->b / o.b;
return q;
}
calculator calculator :: operator= (calculator o)
{
cal q;
q.a = this->a = o.a;
q.b = this->b = o.b;
return q;
}


void cal :: disp()
{
cout<<endl<<" a= "<<a<<"    b= "<<b;

}

void main()
{
clrscr();
cal o1,o2,o3,o4,o5,o6,o7;
o1.a = 4;
o1.b = 3.3;
o2.a = 6;
o2.b = 7.7;
o3=o1+o2;
o4=o1-o2;
o3.disp();
o4.disp();
o5=o1*o2;
o6=o1/o2;
o5.disp();
o6.disp();
o7=o1=o6;
o7.disp();

getch();
}

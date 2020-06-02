#include<iostream.h>
#include<conio.h>
#include<string.h>
class university
{
public:
char name[10];
int stu,stream,year;

university();
void show();
void set(char n[20])
{
strcpy(name,n);
}

};
university :: university()
{
strcpy(name, "");
stu = 0;
stream = 0;
year = 2020;
}
void university :: show()
{
cout<<endl<<"NAME = "<<name<<"\t STREAMS = "<<stream<<"\t STUDENTS = "<<stu<<"\t YEAR = "<<year;
}
void main()
{
clrscr();
university u1,u2;
university *q;
q = &u1;
q-> set("ABCD") ;
q-> stu = 100;
q-> stream = 5;
q-> year = 2019;
q->show();
q = &u2;
q-> set("XYZ") ;
q-> stu = 200;
q-> stream = 4;
q-> year = 2019;
q->show();
getch();
}




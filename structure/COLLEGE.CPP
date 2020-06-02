#include<iostream.h>
#include<conio.h>
#include<string.h>
class college
{
public:
char name[10];
int stu,stream,year;

college();
void show();
void set(char n[20])
{
strcpy(name,n);
}

};
college :: college()
{
strcpy(name, "");
stu = 0;
stream = 0;
year = 2020;
}
void college :: show()
{
cout<<endl<<"NAME = "<<name<<"\t STREAMS = "<<stream<<"\t STUDENTS = "<<stu<<"\t YEAR = "<<year;
}
void main()
{
clrscr();
college u1,u2;
u1.set("ABCD") ;
u1.stu = 100;
u1.stream = 5;
u1.year = 2019;
u1.show();

u2.set("XYZ") ;
u2.stu = 200;
u2.stream = 4;
u2.year = 2019;
u2.show();
getch();
}




#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class fan
{
int speed;

int blades;
	public:
char fanname[10];
fan();
fan(char*, int, int);
fan addfan(fan, fan);
fan subfan(fan, fan);
void disp();
};
fan :: fan()
{
strcpy(fanname, "");
blades=0;
speed=1;//slow
}
fan :: fan(char n[10], int x, int y)
{
strcpy(fanname, n);
speed = x;
blades = y;
}

fan fan :: addfan(fan a, fan b)
{
this -> speed = a.speed + b.speed;
this -> blades = a.blades + b.blades;
return *this;
}

fan fan :: subfan(fan a, fan b)
{
this -> speed = a.speed - b.speed;
this -> blades = a.blades - b.blades;
return *this;
}
void fan :: disp()
{
cout<<endl<<fanname<<"\t speed = "<<speed<<"\t blade = "<<blades;
}

void main()
{
clrscr();
fan o1("first",2,3),o2("second",1,4),o3,o4;
strcpy(o3.fanname, "third");
strcpy(o4.fanname, "fourth");
o3.addfan(o1,o2);
o4.subfan(o1,o2);
o1.disp();
o2.disp();
o3.disp();
o4.disp();
getch();
}







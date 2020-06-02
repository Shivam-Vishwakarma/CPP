#include <iostream.h>
#include<conio.h>
class myclass
{
int i;
public:void read(int j)
       {
	i= j;
       }
       int getint()
       {
	  return i;
       }
};
void main()
{
clrscr();
myclass ob, *ptobj;
ptobj = &ob; // get address of ob
ptobj->read(10);
cout<<ptobj->getint();       // use -> to call getlnt()
getch();
}
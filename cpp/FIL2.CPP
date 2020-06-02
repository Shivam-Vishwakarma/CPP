// file handling program
//wap to detect whether the file is opned successfully or not
#include"my.h"

ifstream in;  //global in obj.

void main()
{
clrscr();
void show();
in.open("dat");
char c;
if(in!=0)
show();
else
cout<<"\n file not found  ";
getch();
}
void show()
{
char c;
cout<<"\n data of file  ";
while(in)
{
in.get(c);
cout<<"\n  "<<c;
}
}

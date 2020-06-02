//writting into a file
#include"my.h"
void main()
{
 clrscr();
//ofstream out("s.txt",ios::out|ios::trunc);
   //default mode is truncate and write
 ofstream out("s.txt",ios::app);
 out<<a;
 out.close();
 getch();
}
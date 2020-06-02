#include "my.h"
void main()
{
  clrscr();
  int num[]={100,105,110,120,155,250,255};
  ofstream out;
  out.open("myfile.bin");
  out.write((char *) &num, sizeof(num));
  out.close();
  getch();
}


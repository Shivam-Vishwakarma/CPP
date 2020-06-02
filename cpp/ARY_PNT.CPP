//to implement concept of Pointer Vs. Array.
#include<iostream.h>
#include"my.h"
const int MAX = 3;
void main ()
{
clrscr();
   int  var[MAX] = {10, 100, 200};
   int  *ptr;
   ptr = var;    // let us have array address in pointer.
   for (int i = 0; i < MAX; i++) {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;
      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;
      ptr++;    // point to the next location
   }
   getch();
}



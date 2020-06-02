// program to understand pointer to pointer concept.
#include <iostream.h>
void main ()
{
   int  var;
   int  *ptr;
   int  **pptr;
   int ***p1;
   var = 3000;
   ptr = &var;     // take the address of var
   pptr = &ptr;    // take the address of ptr using address of operator &
   // take the value using pptr
   cout <<"\n Value of var :" << var;
   cout <<"\n Value available at *ptr :" << *ptr;
   cout <<"\n Value available at **pptr :" << **pptr;
}

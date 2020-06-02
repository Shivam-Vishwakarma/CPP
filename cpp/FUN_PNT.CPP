// wap to implement the concept of function pointer
#include <iostream.h>
#include "my.h"

int *test();      //decl. of pointer fun.

int *test()      // defi. fo pointer fun.
{
cout<<"hello ";
}
main()
{
int *t;
t=test();           // calling pointer fun. by pointer variable t.
getch();
}

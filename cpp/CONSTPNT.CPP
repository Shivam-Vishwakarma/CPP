/*pointers and const:-
-You can declare constant pointers or pointers to constant.
-A constant pointer means that pointer will always point to the same address.
*/
#include"my.h"
void main()
{
 clrscr();
 int n=44;
 int *const cptr=&n;
  ++(*cptr);//increment content
  ++cptr;//address cannot be modified
 getch();
}
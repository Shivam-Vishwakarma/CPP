/* wap to declar a void pointer . assign address of int,float,char varible
to the void pointer using type casting method. display the contents of
varios vaiable.
*/

#include"my.h"
int a;
float b;
char c;

void *pt=&a;  //          pt points to a

main()
{ clrscr();

 *(int *)pt=12;


cout<<"\n value of a "<<a;

pt=&b;   // pt points to b
*( float *)pt=5.4;
cout<<"\n  d  is "<<b;
pt=&c;

*(char *)pt='r';
cout<<"\n c is "<<c;
getch();
}
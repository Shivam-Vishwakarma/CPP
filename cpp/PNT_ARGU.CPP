#include<iostream.h>
#include<stdlib.h>

void getSeconds(unsigned long *par);
int main ()
{
unsigned long sec=4;


getSeconds( &sec );  // print the actual value

cout << "Number of seconds :" << sec << endl;

return 0;

}

void getSeconds(unsigned long *par) {
   // get the current number of seconds
//   for(int i=1;i<=10;i++)
   *par = random(10);
   return;
}

#include"my.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{   clrscr();
   int i,no[5];


  randomize();
  printf("\n random numbers from 0 to 99\n\n");
  for(i=0;i<1;i++)

   printf("%d\n", rand()%100);

   getch();
   return 0;
}

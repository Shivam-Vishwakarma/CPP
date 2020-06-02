#include"my.h"

int main()
{
clrscr();
int a, b, no;
printf("\n\n enter size of heart (0 - 17) : ");
scanf("%d",&no);

for (a=no/2;a<=no;a=a+2)   //for upper part
  {
  for (b=1;b<=no-a;b=b+2)
  printf(" ");
  for (b=1;b<=a;b++)
  printf("@");
  for (b=1;b<=no-a;b++)
  printf(" ");
  for (b=1;b<=a;b++)
  printf("@");
  printf("\n");
  }

for (a=no;a>=0;a--)  // for lower part (triangle shape)
  {
  cout<<" ";
  for (b=a;b<no;b++)
  printf(" ");
  for (b=1;b<=((a*2)-1);b++)
  printf("@");
  printf("\n");
  }
getch();
}

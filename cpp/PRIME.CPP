#include"my.h"
main()
{      clrscr();
long int no,c=0;
printf("\n ENTER AN INTEGER : ");
scanf("%ld",&no);
for(int i=2;i<=no/2;i++)
  {
  if(no%i==0)
  c++;
  }
if(c==0)
printf("\n %ld is a prime no. ",no);
else
printf("\n %ld is not a prime no. ",no);
getch();
}



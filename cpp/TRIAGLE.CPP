/*
    1
   121
  12321
 1234321
 */
#include"my.h"
main()
{
int i,j,k,l,m,n;
clrscr();
printf("\n ENTER NO. OF ROWS : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=n;j>i;j--)
  printf(" ");
  m=1;
  for(k=1;k<=i;k++)
  {
  printf("%d",m);
  m++;
  }
  m-=2;
  for(l=1;l<i;l++)
  {
  printf("%d",m);
  m--;
  }
  printf("\n");

}
getch();
}








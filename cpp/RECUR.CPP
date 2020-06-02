// print number in reverse ( 10-1 ) by recursion method.
#include"my.h"

void print(int p)
{
if (p==0)
   return;
cout<<"\n "<<p;
print(p-1);         // recursion call
return;
}


main()
{
clrscr();
int no;
cout<<"\n enter a no to count down till  1   ";
cin>>no;
print(no);   //call Ist Time
getch();
}


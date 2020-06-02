#include"my.h"
main()
{
clrscr();
float no,tab,a=1,b;
cout<<"\n enter no for print table  ";
cin>>no;
for(a=1;a<=no;a++)
{
for(b=1;b<=10;b++)
{
tab=b*a;
cout<<"  "<<tab;
}
cout<<"\n";
}
getch();
}






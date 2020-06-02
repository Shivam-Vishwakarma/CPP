#include"my.h"
struct test
{
int no,sq;
void sqr();
};
struct test t;   // t is control variable of test structure
void sqr();  //decl
void sqr()    //defi
{
cout<<"\n enter no to find square ";
cin>>t.no;
t.sq=t.no*t.no;
cout<<"\n  squrare is  "<<t.sq;
}
main()
{
clrscr();
sqr();    //call
getch();
}


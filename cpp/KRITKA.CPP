#include"my.h"
struct test
{
int a,b,c;   //member of test
float avg;
void sum();
};
struct test t;
void test::sum()
{
clrscr();
cout<<"\n etner two no ";
cin>>t.a>>t.b;
t.c=t.a+t.b;
cout<<"\n sum is "<<t.c;
}
main()
{
clrscr();
t.sum();
getch();
}





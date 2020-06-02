//Compile Time Polymorphism - implement by Function OverLoading.
#include<iostream.h>
#include<conio.h>
void test(float a , float b)
{
cout<<"\n i am  test(float a ,float b) with 2 argument ";
}
void test(int a )
{
cout<<"\n i am test(int a) with 1 argument--- a value is "<< a;
}
void test()
{
cout<<"\n hello ";
}
main()
{
clrscr();
int no=9;
test();
test(5,6);
test(no);
getch();
}


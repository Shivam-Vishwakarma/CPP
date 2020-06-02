#include"my.h"
/*
syntax

ReturnType  FunName(arguement list);    //decl.

exp.
int             msg(int a, int b, float c);


according to function decleartion there are 4 type of fun. -
1.   no return and no  argument        void msg();
2.   no return but argument            void msg(int a);

3.   return and also argument          int msg(int a, int b);
4.   retunr but no argument            char msg(char a);


*/

void msg(int a, int no)
{
while(a<=no)
{
cout<<"\n "<<a;
a++;
}
}
void main()
{
clrscr();
int b;
cout<<"\n enter no for cube  ";
cin>>b;
msg(1,b);
getch();

}
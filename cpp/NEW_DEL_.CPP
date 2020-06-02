//WAP to use new and delete operator with const. and dest. allocate memory
// for given number of integer. also release the memory.

/*
NOTE-
1-
*/
#include"my.h"
int number();

class num
{   int *x,s;
public: num()
{
s=number();
x=new int[s];
}
~num()
{
delete x;
}
void input();
void sum();
};
void num:: input()
{
    for(int i=0;i<=s;i++)
    {
    cout<<"\n enter number "<<i+1<<"   ";
    cin>>x[i];
    }
}
void num::sum()
{
int sm=0;
for( int i=0;i<=s;i++)
{
sm=sm+x[i];
cout<<"\n sum of elements  "<<sm;
}
}
number()
{
int no;
cout<<"\n how many no you want to enter  ";
cin>>no;
return(no);
}
main()
{
clrscr();
num n1;
n1.input();
n1.sum();
getch();
}

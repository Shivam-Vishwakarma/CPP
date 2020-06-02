#include"my.h"

const int low=25;
void main()
{
randomize();
int num,pt=5;
for(int i=1;i<=4;i++)
{
num=low +random(pt);
cout<<num<<":  ";
pt--;
}
getch();
}


#include"my.h"
void Position(int &C1,int C2=3)
{

C1+=2;
C2+=2;
}
void main()
{ clrscr();
int P1=20, P2=4;
Position(P1);
cout<<P1<<","<<P2<<endl;
Position(P2,P1);
cout<<P1<<","<<P2<<endl;

}
#include<iostream.h>
#include<conio.h>
void hanoi(int n,char beg,char aux,char end)

{
 if(n!=0)
 {
 hanoi(n-1,beg,end,aux);
 cout<<"\n move disk "<<n<<" form "<<beg<<" to "<<aux;
 hanoi(n-1,aux,beg,end);
 }
}
void main()
{   clrscr();
int n;
char beg='A',aux='B',end='C';
n=3;
hanoi(n,beg,aux,end);
getch();
}





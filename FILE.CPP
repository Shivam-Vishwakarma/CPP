#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
fstream f;
char a,b,c;
clrscr();
f.open("H:\\file\\test.txt",ios::out);
cout<<"\n enter some char : \n press esc to stop";
while(1)
{
a=getche();
if(a==27) break;
f<<a;
}
f.close();
f.open("H:\\file\\test.txt",ios::in);

cout<<"\n file text :\n";
while(!f.eof() )
{
f>>b;
cout<<b;
}
f.close();
getch();
}

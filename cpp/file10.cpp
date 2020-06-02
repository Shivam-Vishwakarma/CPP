
#include"my.h"
void main()
{
clrscr();
char line[50];
int c=0;
ifstream in("g.txt");
while(in.eof()==0)
{

in>>line;
if(strcmp(line,"you")==0)
c++;
}
cout<<"no of you in file"<<c;
in.close();
getch();
}
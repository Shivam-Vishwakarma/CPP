//to count words in a file
#include"my.h"
void main()
{
clrscr();
char line[50];
int c=0;
ifstream in("g.txt");
while(in.eof()==0)
{
in>>line;//to read single word
//in.getline(line,50); to read a line
c++;
}

in.close();

cout<<"no of word in file is"<<c;
getch();
 }
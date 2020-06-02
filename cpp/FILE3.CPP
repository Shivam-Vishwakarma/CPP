//reading from a file
#include"my.h"
void main()
{
clrscr();
char name[45],surname[34];

ofstream out("rr.txt");
out<<"hello to all my dear students ";
out.close();

ifstream in("rr.txt");
in>>name>>surname;
in.close();

cout<<"content of the file is\n";
cout<<name<<"  "<<surname;
//in.close();
getch();
}




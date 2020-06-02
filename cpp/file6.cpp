#include"my.h"
void main()
{
 clrscr();
 int nline=0;
 char line[50];
 ofstream out("g.txt",ios::app);
 cout<<"enter statement";
 cin.getline(line,50);
 out<<"\n"<<line;
 nline++;
 cout<<"no of line"<<nline;

 getch();
 }
 //reading
/* ifstream in("getdata.txt");
 while(in.eof()==0)
 {
    in.getline(line,50);
    cout<<line<<"\n";
    nline++;
    |}*/
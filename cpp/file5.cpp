#include"my.h"
void main()
{
 clrscr();
 char line[50];
 /* writing
 ofstream out("getdata.txt",ios::app);
 cout<<"enter statement";
 cin.getline(line,50);
 out<<"\n"<<line;
 */
 //reading
 ifstream in("getdata.txt");
 while(in.eof()==0)
 {
    in.getline(line,50);
    cout<<line<<"\n";
 }
 getch();
}
#include"my.h"
main()
{ clrscr();
char data[50];
ofstream out;
out.open("aa.txt",ios::out);
cout<<"\n enter any text  ";
cin.getline(data,50);
out<<data;
out.close();

out.open("aa.txt",ios::app);
cout<<"\n please again enter new data in the file  :   \n ";
cin.getline(data,50);
cout<<data;
out.close();

ifstream in;
in.open("ac.txt",ios::in);
cout<<"\n these data stored in your file  \n \n ";
char ch;
while(in.eof()==0)
{
in>>data;
cout<<data;
}
getch();
}
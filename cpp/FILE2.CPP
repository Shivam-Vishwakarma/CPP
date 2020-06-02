//wap to implement append mode to file.
#include"my.h"
void main()
{
clrscr();
ofstream out("s.txt",ios::app);
int rno,mark;
char name[10];
cout<<"enter student name";
cin>>name;
cout<<"enter roll no";
cin>>rno;
cout<<"enter marks";
cin>>mark;

out<<"\n rollno--"<<rno;
out<<"\n name--"<<name;
out<<"\n mark--"<<mark;

out.close();
getch();
}


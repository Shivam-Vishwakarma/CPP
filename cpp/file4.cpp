#include"my.h"
void main()
{
clrscr();
ofstream out("stud.txt");
int eng,math,hin,sci,gk,rno;
char name[20],grade;
cout<<"enter the student name";
cin>>name;
cout<<"enter the student roll no";
cin>>rno;
cout<<"enter the marks of five subject";
cin>>eng>>hin>>sci>>gk>>math;
int tot=eng+hin+math+sci+gk;
float per=tot/5;
if(per>=60)
grade='a';
else if(per>=50||per<=59)
grade='b';
else if(per>=40||per<=49)
grade='c';
else
grade='d';
out<<name;
out<<rno;
out<<tot;
out<<grade;
out.close();
getch();
}
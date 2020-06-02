//read content of file in object from a file
#include"my.h"
class student
{
 public:
	 int rollno;
	 char name[40];
	 int marks;
 void printdata();
};
void student::printdata()
{

 cout<<"rollno"<<rollno;
 cout<<"\nname"<<name;
 cout<<"\nmarks"<<marks;
}

void main()
{
 clrscr();
 student s;
 ifstream in ("student.txt",ios::binary);
 while(in.eof()==0)
 {
 in.read((char *) &s,sizeof(s));
 s.printdata();
 }
 in.close();
 getch();
}
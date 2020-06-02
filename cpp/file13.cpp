//search in a file
#include"my.h"
class student
{
 public:
	 int rollno;
	 char name[40];
	 int marks;
 void print();
 int getrollno();
};
int student::getrollno()
{
 return rollno;
}
void student::print()
{
 cout<<"rollno"<<rollno;
 cout<<"\nname"<<name;
 cout<<"\nmarks"<<marks;
}

void main()
{
 clrscr();
 int rno;
 char found='n';
 student s;
 cout<<"rollno u want to search";
 cin>>rno;

 ifstream in("st.txt",ios::binary);
 while(in.eof()==0)
 {
 in.read((char *) &s,sizeof(s));
 if(s.getrollno()==rno)
 {
  found='y';
  s.print();
  break;
 }
 }
 if(found=='n')
 {
  cout<<"not found";
 }
 in.close();
 getch();
}
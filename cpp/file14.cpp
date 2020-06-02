//deletion from a file
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

 student s;
 cout<<"rollno u want to delete";
 cin>>rno;
  ofstream out("tmp.txt",ios::binary|ios::app);
 ifstream in("st.txt",ios::binary);
 while(in.eof()==0)
 {
 in.read((char *) &s,sizeof(s));
 if(s.getrollno()!=rno)
 {
   out.write((char *) &s,sizeof(s));
 }
 }
 remove("st.txt");
 rename("tmp.txt","st.txt");
 out.close();
 /*cout<<"content of the file\n";
 while(in.eof()==0)
 {
   in.read((char *) &s,sizeof(s));
   s.print();
 }
 in.close();
 */
 getch();
}
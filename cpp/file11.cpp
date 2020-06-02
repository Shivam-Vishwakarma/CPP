//writting class object in a file
#include"my.h"
class student
{
 public:
	 int rollno;
	 char name[40];
	 int marks;
 void getdata();
};
void student::getdata()
{
 cout<<"Enter rollno"; cin>>rollno;
 cout<<"Enter name"; cin>>name;
 cout<<"Enter marks"; cin>>marks;
}

void main()
{
 clrscr();
 student s;
 s.getdata();
 ofstream out("st.txt",ios::binary|ios::app);
 out.write((char *) &s,sizeof(s));
 out.close();
 getch();
}
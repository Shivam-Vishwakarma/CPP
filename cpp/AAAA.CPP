#include"my.h"
class student
{
private : int admno;
	  char sname[20];
	  float eng,math,science, total;
	  float ctotal(float e,float m,float s)
	  {
	  total=e+m+s;
	  return(total);
	  }
public: void takedata()
	{
	cout<<"\n enter admission number ";
	cin>>admno;
	cout<<"\n enter student name  ";
	cin>>sname;
	cout<<"\n enter the marks of english, math and science ";
	cin>>eng>>math>>science;
	float tot=ctotal(eng,math,science);
	cout<<"\n The total obtained marks is "<<tot;
	}
};
main()
{
clrscr();
student s1;
for(int i=0;i<3;i++)
{
s1.takedata();
}

getch();
}
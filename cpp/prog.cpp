#include"my.h"
class Addr
{
public:
 int houseno;
 char area[26];
 char city[26];
 char state[26];
 Addr()
 {
 }
};
class Emp: public Addr
{
 public:
 int empno;
 char name[26];
 char desig[16];
 float basic;
 Emp();
 void Display();
 //void Specific(int);
}e[2];
 Emp::Emp()
 {
  cout<<"Employee Number:"; cin>>empno;
  cout<<"Employee Name:";cin>>name;
  cout<<"Designation:";cin>>desig;
  cout<<"Basic Pay:";cin>>basic;
  cout<<"House Number:"; cin>>houseno;
  cout<<"Area:"; cin>>area;
  cout<<"city:"; cin>>city;
  cout<<"State:"; cin>>state;
 }
 void Emp:: Display()
 {
  cout<<"\nEmployee Number:"<<empno;
  cout<<"\nEmployee Name:"<<name;
  cout<<"\nDesignation:"<<desig;
  cout<<"\nBasic Pay:"<<basic;
  cout<<"\nHouse Number:"<<houseno;
  cout<<"\nArea:"<<area;
  cout<<"\ncity:"<<city;
  cout<<"\nState:"<<state;
 }
 void Specific(int);
 void main()
{
 clrscr();
 //Emp e[2];
 int no;
 int i;
 for(i=0;i<2;i++)
 {
   e[i].Display();
 }
  cout<<"enter empno"; cin>>no;
  Specific(no);
getch();
}
 void Specific(int eno)
 {
  //Emp e[2];
  int flag=0;
  for(int i=0;i<2;i++)
  {
    if(e[i].empno==eno)
    {
     e[i].Display();
     flag=1;
     break;
    }
  }
  if(!flag)
  {
   cout<<"Employee not Exisist";
  }
 }
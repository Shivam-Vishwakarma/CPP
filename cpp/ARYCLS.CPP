// wap to illustrate array of class
#include"my.h"
void main()
{
int k=0;
class stud
{
public: int rno;
	char name[20], grade[2];
};
class stud st[3];
while(k<3)
{
clrscr();
gotoxy(2,4);
cout<<" Name     ";
gotoxy(17,5);
cin>>st[k].name;
gotoxy(2,5);
cout<<" Roll Number    ";
gotoxy(17,5);
cin>>st[k].rno;
gotoxy(2,6);
cout<<" Grade    ";
gotoxy(17,6);
cin>>st[k].grade;

st[k].grade[1]='\0';
cout<<" Press any Key to ";
getch();
k++;
}
k=0;
clrscr();
cout<<"\n Name\t Roll Number\t Grade \n ";
while(k<3)
{
cout<<st[k].name<<"\t\t"<<st[k].rno<<"\t\t"<<st[k].grade<<"\n" ;
k++;
}
getch();
}

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int rno;
char name[20];
float phy,chem,math,cs,total,per;

cout<<"\n Enter the Roll Number of Student  ";
cin>>rno;
cout<<"\n Enter the Name of Student         ";
gets(name);
cout<<"\n Enter the marks of Physics        ";
cin>>phy;
cout<<"\n Enter the marks of Chemistery     ";
cin>>chem;
cout<<"\n Enter the marks of Maths          ";
cin>>math;
cout<<"\n Enter the marks of Computer       ";
cin>>cs;

getch();
clrscr();

total=phy+chem+math+cs;
per=(total/4);

cout<<"=============================MARKSHEET===================================";
cout<<"\n \n Student Roll Number       =  "<<rno;
cout<<"\n \n Student Name              =  "<<name;
cout<<"\n \n Marks of Physics          =  "<<phy;
cout<<"\n \n Marks of Chemistry        =  "<<chem;
cout<<"\n \n Marks of Maths            =  "<<math;
cout<<"\n \n Marks of Computer         =  "<<cs;
cout<<"\n \n Total Obtaind Marks       =  "<<total;
cout<<"\n \n Total Percentage          =  "<<per;


if( (phy<40 && chem <40 )||(phy<40 && math<40) || (phy<40 && cs<40) ||(chem<40 && math<40 )|| ( chem<40 && cs<40 )|| (math<40 && cs<40))
cout<<"\n \n Result                    =   Fail ";

else if(phy<40 || chem<40 || math<40 || cs<40)
cout<<"\n \n Result                    =  Compartment ";

else if(per>90)
cout<<"\n \n Result                    =  Merit ";

else if(per>=60 && per<90)
cout<<"\n \n Result                    =  First Division  ";

else if(per>=45 && per<60)
cout<<"\n \n Result                    =  Second Divisiaon ";

else if (per>=40 && per<45)
cout<<"\n \n Result                    =  Third Division  ";
cout<<"\n \n ============================= All The Best ===============================";
getch();
}


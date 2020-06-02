#include<iostream.h>
#include<stdlib.h>
#include<math.h>
float area(float a,float b,float c)
{
float s,ar;
s=(a+b+c)/2;
ar=sqrt(s*(s-a)*(s-b)*(s-c));
return ar;
}
float area(float a,float b)
{
return a*b;
}
float area(float a)
{
return a*a;
}
int main()
{
system("cls");
int choice,s1,s2,s3,ar;
do
{
cout<<"?narae main menu/n";
cout<<"1.triangle/n";
cout<<"2.squre?n";
cout<<"3.rectangle/n";
cout<<"4.exit?n";
cout<<"enter your choice(1-4):";
cin>>choice;
cout<<"/n";
switch(choice)
{
case1:cout<<"enter 3 sides?n";
cin>>s1>>s2>>s3;
ar=area(s1,s2,s3);
cout<<"the area is"<<ar<<"/n";
break;
case2:cout<<"enter a side/n";
cin>>s1;
ar=area(s1);
cout<<"the area is"<<ar<<"/n";
break;
case3:cout<<"enter length & breadth/n";
cin>>s1>>s2;
ar=area(s1,s2);
cout<<"the area is"<<ar<<"/n";
break;
case4:break;
defalt:cout<<"wrong choice!!/n";
};
}
while(choice>0&&choice<4);
return 0 ;
}
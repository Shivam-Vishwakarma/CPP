#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
double age;
cout<<"\n enter voter age :\n";
cin>>age;
if(age>=18&&age<200)
{
cout<<"\n you are eligable to vote";
}
else if(age>=200)
cout<<"the person is died";
else
{
cout<<"\n the voter is not eligable to vote";
}
getch ();
}

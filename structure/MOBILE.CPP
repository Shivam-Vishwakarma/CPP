#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct mobile
{
char name[30],ram[6],rom[6];
float price;
public:
void get();
void show();
};
void mobile::get()
{
cout<<"\n Enter name : ";
gets(name);
cout<<"\n RAM : ";
gets(ram);
cout<<"\n ROM : ";
gets(rom);
cout<<"\n Price : ";
cin>>price;
}
void mobile::show()
{
cout<<endl<<"\t"<<name<<"\t"<<ram<<"\t"<<rom<<"\t"<<price;
}

void main()
{
mobile a,b,c,*x;
x=&a;
cout<<"\n Enter for a"<<endl;
x->get();
x=&b;
cout<<"\n Enter for b"<<endl;
x->get();
x=&c;
cout<<"\n Enter for a"<<endl;
x->get();

x=&a;
x->show();
x=&b;
x->show();
x=&c;x->show();
getch();
}
//wap to sum of two no.

#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int age;
char gen;
cout<<"\n enter voter gender m/f    ";
cin>>gen;
cout<<"\n enter vote age  ";
cin>>age;
if((gen=='f'|| gen=='F' && age>=18) ||(gen=='m'|| gen=='M' && age>=21))
cout<<"\n voter is able to vote ";
else
cout<<"\n voter is not able to vote ";

getch();
}








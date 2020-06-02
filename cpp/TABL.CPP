//wap to print table of till given no.
#include<iostream.h>
#include<conio.h>
main()
{ clrscr();
int no,a,tab;
cout<<"\n enter no of terms for printing table  ";
cin>>no;

for(a=1;a<=no;a++)
{
for(int b=1;b<=10;b++)
{

tab=a*b;
cout<<" "<<tab;
}
cout<<"\n";
}
getch();
}


#include"my.h"
main()
{
clrscr();
long c,f=0,s=1,no,next;
cout<<"\n enter the no of terms : ";
cin>>no;
for(c=0;c<no;c++)
{
if(c<=1)
next=c;
else
{
next=f+s;
f=s;
s=next;
}
cout<<"\n"<<next;
}
getch();
}



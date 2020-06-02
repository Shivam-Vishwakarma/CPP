#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
long no[5],r,bg,s;
for(r=0;r<5;r++)
{
cout<<"\n enter "<<r<<"elements in array";
cin>>no[r];
}
bg=no[0];
s=no[0];
for(r=0;r<5;r++)
{
if(bg<no[r])
{
bg=no[r];
}
if(s>no[r])
{
s=no[r];
}
}
cout<<"big element"<<bg;
cout<<"small element"<<s;
getch();
}
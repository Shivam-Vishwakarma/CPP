#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int choice,del,i,top=-1,stack[30],ele;
char ch='y';
do
{
cout<<"\n \t Menu  ";
cout<<"\n Enter 1 for Push";
cout<<"\n Enter 2 for Pop";
cout<<"\n Enter 3 for Display";
cout<<"\n Enter 4 for Quit";
cin>>choice;
switch(choice)
{
case 1:
if(top==29)
{
cout<<"\n Overflow";
}
else
{
top++;
cout<<"\n Enter element to push";
cin>>ele;
stack[top]=ele;
}
break;
case 2:
if(top==-1)
{
cout<<"\n Underflow";
}
else
{
del=stack[top];
top--;
cout<<"\n Element Deleted="<<del;
}
break;
case 3:
if(top==-1)
{
cout<<"\n Underflow";
}
else
{
for(i=top;i>=0;i--)
{
cout<<"\n \t"<<stack[i]<<endl;
}
}
break;
case 4:
exit(0);
break;
default:
cout<<"\n Wrong Choice";
}
}while(ch=='y' || ch=='Y');
getch();
}

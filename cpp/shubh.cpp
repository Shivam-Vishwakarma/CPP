#include<iostream.h>
#include<conio.h>
int max=7;
int t=0;
 
class stack
{
int s[7];
public:
void push(int);
void pop();
void top();
void empty();
void show();
};
 
void stack::push(int y) //Push Operation
{
if(t<max)
 {
  t=t+1;
  s[t]=y;
 }
else
cout<<endl<<"stack overflows..."<<endl;
}
 
void stack::pop() //Pop Operation
{
int item;
if(t>=0)
 {
  t=t-1;
  item=s[t+1];
  cout<<endl<<"popped item >>"<<item<<endl;
 }
 else
 cout<<endl<<"stack underflows"<<endl;
}
 
void stack::top() //To find the top of the stack
{
if(t>=0)
cout<<endl<<"topmost element >> "<<s[t]<<endl;
else
cout<<endl<<"stack underflows..."<<endl;
}
 
void stack::empty() //To check if the stack is empty
{
if(t<0)
cout<<endl<<"stack is empty..."<<endl;
else
cout<<endl<<"stack is not empty..."<<endl;
}
 
void main()
{
int a,x;
stack s1;
clrscr();
do
{
cout<<"enter an option..."<<endl<<"1-push"<<endl<<"2-pop"<<endl<<"3-top"<<endl<<"4-empty"<<endl;
cout<<"5-end"<<endl;
cin>>a;
cout<<endl;
switch(a)
{
case 1:
{
cout<<endl<<"enter a value  >> "<<endl;
cin>>x;
s1.push(x);
}
break;
case 2:
s1.pop();
break;
case 3:
s1.top();
break;
case 4:
s1.empty();
break;
}
}
while(a!=5);
getch();
}
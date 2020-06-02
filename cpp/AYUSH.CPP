#include<conio.h>
#include<iostream.h>
#include<stdio.h>

void push(int stack[], int &top, int val, int a);
int pop(int stack[], int &top);
void display(int stack[], int top);
void main()
{
int stack[30];
int top;
int val;
int c;
top=-1;
do
{
clrscr();
cout<<"\n Menu  \n";
cout<<"\n Push     1 ";
cout<<"\n Pop      2 ";
cout<<"\n Display  3 ";
cout<<"\n Quit     4 ";
cout<<"\n Enter Your Choice  ";
cin>>c;
switch(c)
{
case 1: cout<<"\n Enter the value to be Pused ";
	cin>>val;
	push(stack,top,val,30);
	break;
case 2: cout<<"\n When your choice will be 2 then automatically to top value of stack is Removed/Popped";
	val=pop(stack,top);
	if(val!=-9999)
	cout<<"\n the popped value is "<<val;
	break;
case 3: cout<<"\n the stack is  ";
	display(stack,top);
	break;
}
}
while(c!=4);
}
void push(int stack[],int &top, int val, int a)
{
if(top<a)
{top++;
stack[top]=val;
}
else
{
cout<<"\n The stack is Full ";
}
}
int pop(int stack[],int &top)
{
int val;
if(top>=0)
{
val=stack[top];
top--;
return (val);
}
else
{
cout<<"\n stack is empty ";
return(-9999);
}
}
void display(int stack[], int top)
{
int i;
if(top>=0)
{
cout<<"\n";
for(i=top;i>=0;i--)
cout<<stack[i]<<"  ";
}
cout<<"\n enter a key to continue ...... ";
getch();
fflush(stdin);
}

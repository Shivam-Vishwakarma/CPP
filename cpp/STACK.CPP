/*
program demonstrates the stack operation. The push and pop operations are
carried out by their respective functions.
*/
#include"my.h"

void push(int stack[], int &top, int val, int n);

int pop(int stack[], int &top);

void display(int stack[], int top); // to display contents of the stack.


void main()
{
int stack[30]; //stack decleration
int top;	//top of the stack.
int val;	//value to be pushed or popped.
int ch;
top=-1;		//indicates that the stack is empty.
do
{
clrscr();
cout<<"\n Menu  \n";
cout<<"\n Push     1 ";
cout<<"\n Pop      2 ";
cout<<"\n Display  3 ";
cout<<"\n Quit     4 ";
cout<<"\n Enter Your Choice  ";
cin>>ch;
switch(ch)
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
while(ch!=4);
}

void push(int stack[],int &top, int val, int n)
{
if(top<n)
{top++;
stack[top]=val;
}
else
{
cout<<"\n The stack is Full ";
}
}


//this fun. returns a value -9999 if the stack is empty.
int pop(int stack[],int &top)
{
int v;
if(top>=0)
{
v=stack[top];
top--;
return (v);
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

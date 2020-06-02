/*
program demonstrates the stack operation. The push and pop operations are
carried out by their respective functions.
*/
#include"my.h"
void push(int sta[], int &t, int k, int z);
int pop(int sta[], int &t);
void display(int sta[], int t); // to display contents of the stack.
void main()
{
int sta[40]; //stack decleration
int t;	//top of the stack.
int k;	//value to be pushed or popped.
int chi;
t=-1;		//indicates that the stack is empty.
do
{
clrscr();
cout<<"\n Menu  \n";
cout<<"\n Push     1 ";
cout<<"\n Pop      2 ";
cout<<"\n Display  3 ";
cout<<"\n Quit     4 ";
cout<<"\n Enter Your Choice  ";
cin>>chi;
switch(chi)
{
case 1: cout<<"\n Enter the value to be Pused ";
	cin>>k;
	push(sta,t,k,40);
	break;
case 2: cout<<"\n When your choice will be 2 then automatically to top value of stack is Removed/Popped";
	val=pop(sta,t);
	if(k!=-9999)
	cout<<"\n the popped value is "<<k;
	break;
case 3: cout<<"\n the stack is  ";
	display(sta,t);
	break;
}
}
while(chi!=4);
}
void push(int sta[],int &t, int k, int z)
{
if(t<z)
{t++;
sta[t]=k;
}
else
{
cout<<"\n The stack is Full ";
}
}
//this fun. returns a value -9999 if the stack is empty.
int pop(int sta[],int &t)
{
int k;
if(t>=0)
{
k=sta[t];
t--;
return (k);
}
else
{
cout<<"\n stack is empty ";
return(-9999);
}
}
void display(int sta[], int t)
{
int i;
if(t>=0)
{
cout<<"\n";
for(i=t;i>=0;i--)
cout<<sta[i]<<"  ";
}
cout<<"\n enter a key to continue ...... ";
getch();
fflush(stdin);
}

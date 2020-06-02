/*
program demonstrates the Queue operation. The Add and Delete operations are
carried out by their respective functions.
*/
#include"my.h"
void add(int Queue[], int &rear, int val, int n);

int del(int Queue[], int &front,int rear);

void display(int Queue[], int front,int rear); // to display contents of the Queue.

void main()
{
int Queue[30]; //Queue decleration
int front,rear;	//fornt and rear pointers of the Queue.
int val;	//value to be addres or deleted
int ch;
int size;
cout<<"\n etner the size of the Queue   ";
cin>>size;
front=rear=0;	//indicates that the Queue is empty.
do
{
clrscr();
cout<<"\n Menu  \n";
cout<<"\n Add         1 ";
cout<<"\n Delete      2 ";
cout<<"\n Display     3 ";
cout<<"\n Quit        4 ";
cout<<"\n Enter Your Choice  ";
cin>>ch;
switch(ch)
{
case 1: cout<<"\n Enter the value to be Added ";
	cin>>val;
	add(Queue,rear,val,size);
	break;
case 2: cout<<"\n When your choice will be 2 then automatically to top value of Queue is Deleted";
	val=del(Queue,front,rear);
	if(val!=-9999)
	cout<<"\n the Deleted value is "<<val;
	break;
case 3: cout<<"\n the Queue is  ";
	display(Queue,front,rear);
	break;
}
}
while(ch!=4);
}
void add(int Queue[],int &rear, int val, int n)
{
if(rear<n)
{
Queue[++rear]=val;
}
else
{
cout<<"\n The Queue is Full ";
}
}
//this fun. returns a value -9999 if the Queue is empty.
int del(int Queue[],int &front,int rear)
{
int v;
if(front!=rear)
{
v=Queue[++front];
return (v);
}
else
{
cout<<"\n Queue is empty ";
return(-9999);
}
}
void display(int Queue[], int front,int rear)
{
int i;
if(front<rear)
{
cout<<"\n";
for(i=front+1;i<=rear;i++)
cout<<Queue[i]<<"  ";
}
cout<<"\n enter a key  ";
getch();
fflush(stdin);
}

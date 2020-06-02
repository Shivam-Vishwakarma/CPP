# include <iostream.h>
# include <conio.h>
# include<process.h>
int Insert_in_Q(int[],int);
void Display(int[],int,int);
const int size=50;
int Queue[size],front=-1,rear=-1;
void main()
{
int Item,res;char ch='y';
	clrscr();
	while(ch=='y'||ch=='Y')
	{
		cout<<"\n Enter ITEM for insertion:";
		cin>>Item;
		res=Insert_in_Q(Queue,Item);
		if (res==-1)
		{
			cout<<"overflow!!!Aborting!! \n";
			exit(1);
		}
		cout<<"Now the Queue (Front.....to.....Rear) is :";
		Display(Queue,front,rear);
		cout<<"Want to insert more elements? (y/n)...";
		cin>>ch;

	}
}
int Insert_in_Q(int Queue[],int ele)
{
	if(rear==size-1)return -1;
	else if(rear==-1)
	{
		front=rear=0;
		Queue[rear]=ele;
	}
	else
	{
		rear++;
		Queue[rear]=ele;
	}
	return 0;
}
void Display(int Queue[],int front,int rear)
{
	if(front==-1)return;
		for(int i=front; i<rear; i++)
			cout<<Queue[i]<<"<-\t";
	cout<<Queue[rear]<<endl;
}
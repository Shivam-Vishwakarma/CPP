#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int n;
struct node* next;
}s;
struct node *top=NULL,*temp,*curr;

	void push()
	{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter element : ");
	scanf("%d",&temp->n);
	temp->next=top;
	top=temp;
	}

	void pop()
	{
	if(top==NULL)
		{
		printf("\n Stack Underflow !!!");
		}
	else
		{
		curr=top;
		top=top->next;
		printf("\n Deleted element : %d",curr->n);
		free(curr);
		}
		getch();
	}

	void display()
	{
	if(top==NULL)
	printf("\n Stack Underflow!!!");
	else
	{
	curr=top;
	do
		{
		printf("\n | %d | ",curr->n);
		curr=curr->next;
		}
		while(curr!=NULL);
	}
	getch();
	}
void main()
{
int c;
while(1)
{
clrscr();
printf("\n 1.push\n 2.pop\n 3.display\n 4.exit");
printf("\n Enter your choice : ");
scanf("%d",&c);
	switch(c)
	{
	default : printf("\n wrong choice ");break;
	case 1: push();break;
	case 2: pop();break;
	case 3: display();break;
	case 4: exit(0);
	}
}
}



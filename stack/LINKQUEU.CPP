#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
struct node{
int n;
struct node* next;
};
struct node *temp,*f,*r,*curr;
void insert()
{
	temp=(struct node*) malloc(sizeof(struct node));
	printf("\n enter element");
	scanf("%d",&temp->n);
	temp->next=NULL;
	if(f==NULL&&r==NULL)
	{
		f=temp;
		r=temp;
	}
	else
	{
	r->next=temp;
	r=temp;
	}
}
void del()
{
if(f==NULL)
	printf("\n QUEUE UNDERFLOW !!!");
else
	{
	curr=f;
	if(f==r)
		{  	f=r=NULL;
			printf("\n deleted element : %d",curr->n);
		}
	else
	{
	f=f->next;
	printf("\n deleted element : %d",curr->n);
	}
	free(curr);
	}
	getch();
}
void display()
{
if(f==NULL)
	printf("\n EMPTY QUEUE !!!");
else
	{
		curr=f;
		do
		{
		printf(" %d ",curr->n);
		curr=curr->next;
		}while(curr!=NULL);
	}
	getch();
}
void main()
{
int c;
while(1)
{
clrscr();
printf("\n 1.insert\n 2.delete\n 3.display\n 4.exit");
printf("\n Enter your choice : ");
scanf("%d",&c);
	switch(c)
	{
	default : printf("\n wrong choice ");break;
	case 1: insert();break;
	case 2: del();break;
	case 3: display();break;
	case 4: exit(0);
	}
}
}






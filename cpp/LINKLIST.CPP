/*
Algo Insertion at the beginning of the Singly linked lists
Step 1. Create a new node and assign the address to any node say ptr.
Step 2. OVERFLOW,IF(PTR = NULL)
		write : OVERFLOW and EXIT.
Step 3. ASSIGN INFO[PTR] = ITEM
Step 4. IF(START = NULL)
		ASSIGN NEXT[PTR] = NULL
	 ELSE
		ASSIGN NEXT[PTR] = START
Step 5. ASSIGN START = PTR
Step 6. EXIT

*/

/* INSERT A NODE INTO A SIMPLE LINKED LIST AT THE BEGINNING */

#include <stdio.h>
#include<iostream.h>
#include <malloc.h>
#include <conio.h>

struct link
{
	int data;
	struct link *next;
};

int i;
int number;
struct link start, *previous, *new1;
void insertion(struct link *);
void create_list(struct link *);
void display(struct link *);

/* Function create a linked list */
void create_list(struct link *node)
{
	char ch;
	start.next = NULL;
	node = &start;      /* Point to the start of the list */
	i = 0;
	fflush(stdin);
	cout<<"\n Input choice n for break: ";
	ch = getchar();
	while(ch != 'n')
	{
		node->next = (struct link* ) malloc(sizeof(struct link));
		node = node->next;
		cout<<"\n Input the node  : "<<i+1;
		cin>>node->data;
		node->next = NULL;
		fflush(stdin);
		cout<<"\n Input choice n for break:  ";
		ch = getchar();
		i++;
	}
}
/* Inserting a node */
void insertion(struct link *node)
{
	node = start.next;
	previous = &start;
	new1 = (struct link* ) malloc(sizeof(struct link));
	new1->next = node ;
	previous->next = new1;
	cout<<"\n Input the fisrt node value: " ;
	cin>>new1->data;
}
/* Display the list */
void display(struct link *node)
{
	node = start.next;
	cout<<"\n After Inserting a node list is as follows : \n";
	while (node)
	{
		cout<<" \t"<<node->data;
		node = node->next;
	}
}
/* Function main */
void main()
{
	struct link *node = (struct link *) malloc(sizeof(struct link));
	clrscr();
	create_list(node);
	insertion(node);
	display(node);
    getch();
}
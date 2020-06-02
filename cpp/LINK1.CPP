//stack
#include "my.h"
#include<stdlib.h>
struct NODE
{
      int info;
      NODE *next;
};
class Insert_Beg
{
 public:
	NODE *start;
	NODE *node;
	NODE *temp;
	Insert_Beg()
	{
	start=NULL;
	node=NULL;
	temp=NULL;
	}
	void Insert();   //push to stack i.e. insert begginning
	void Display();
	void dele();    //pop

};
void Insert_Beg::dele()
{
temp=start;
start=start->next;
cout<<"deleted info is"<<temp->info;
free(temp);
}
void Insert_Beg::Insert()
{
 int data;
 node= new NODE;
 cout<<"enter data"; cin>>data;
 node->info=data;
 if(start==NULL)
  {
    node->next=NULL;
    start=node;
  }
  else
  {
   node->next=start;
   start=node;
  }
}
void Insert_Beg::Display()
{
 temp=start;
 do
 {
  cout<<"info="<<temp->info<<"|"<<"address="<<temp<<"|"<<"next="<<temp->next<<endl;
  temp=temp->next;
 }while(temp!=NULL);
}

void main()
{
 clrscr();
 Insert_Beg obj;
 int ch;
 do
 {
 cout<<"\n1. Insert 2. Display  3.Exit 4. del\n";
 cout<<"enter choice"; cin>>ch;
 switch(ch)
  {
    case 1:
	      obj.Insert();
	      break;
    case 2:
	      obj.Display();
	      break;
    case 3:
	     break;
    case 4:   obj.dele(); break;
  }
 }
 while(ch!=3);
 getch();
}


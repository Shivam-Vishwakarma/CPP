#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int n;
struct node* next;
};
struct node *start,*temp;
void insert()
{
temp=(struct node*)malloc(sizeof(struct node));
cout<<"\n Enter Data : ";
cin>>temp->n;
temp->next=start;
start=temp;
}
int del()
{
if(temp==NULL)
{
cout<<"\n NO DATA TO DELETE ";
return 1;
}

else
	{
	cout<<"\n DELETED ELEMENT : "<<temp->n;
	temp=temp->next;
	return 0;
	}
}
void display(struct node *temp)
{
if(temp==NULL) cout<<"\n EMPTY LINK LIST !!!";
while(temp!=NULL)
{
cout<<"\n\t"<<temp->n;
temp=temp->next;
}
}

int main()
{
int i,n,ch,x;
menu:
clrscr();
cout<<"\n------------------- LINK LIST--------------------------";
cout<<"\n\t 1.Insert Data ";
cout<<"\n\t 2.Delete Data ";
cout<<"\n\t 3.Display Data ";
cout<<"\n\t 0. exit()\n\t";

cin>>ch;
switch(ch)
{
default:
cout<<"\n Wrong choice " ;
getch();
goto menu;
case 0: exit(0);
case 1:
clrscr();
cout<<"\n Insert Data Menu ";
cout<<"\n------------------";
cout<<"\n How many data?  ";
cin>>n;
for(i=1;i<=n;i++)
insert();
cout<<"\n "<<n<<" data inserted sucessfully!";
getch();
goto menu;
case 2:
clrscr();
cout<<"\n Delete menu ";
cout<<"\n------------------";
cout<<"\n how many data?  ";
cin>>n;
for(i=1;i<=n;i++)
{
x=del();
if(x==1) break;
}
getch();
goto menu;
case 3:
clrscr();
cout<<"\n DISPLAY DATA MENU \n ";
cout<<"\n----------------------\n";
display(temp);
cout<<"\n\n Press any key to continue !!!";
getch();
goto menu;
}

getch();
}



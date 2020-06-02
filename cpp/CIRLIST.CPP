//Circular Link List

#include <iostream.h>
#include <conio.h>

struct node
{
int num;
struct node *next;
};

void main()
{
clrscr();

node     *create(void),*head;
void     display(node *);
node     *del(node *);
int     count(node *);
node     *insert(node *);

int choice,total;
while(1)
{
cout<<"\n\nChose your choice\n";
cout<<"1)    Create Link List\n";
cout<<"2)    display List\n";
cout<<"3)    Total No. of Element Inserted\n";
cout<<"4)    Insert Element\n";
cout<<"5)    Delete Element\n";
cout<<"6)    EXIT\n";
cout<<"Enter your choice:-";
cin>>choice;
    switch(choice)
   {
   case 1 :  head=create();
                break;
   case 2 :  display(head);
                break;
   case 3 : total=count(head);
               clrscr();
            cout<<"\n\n\tTotal Number of Elements are  "<<total<<"\n\n\n";
               break;
   case 4 : head=insert(head);
               break;
   case 5 : head=del(head);
               break;
   case 6 :  goto out;
   default:    cout<<"\n\nEntered Choice is Illegal\n";
            cout<<"TRY AGAIN";
   }
}
out:
}

node *create(void)
{
node *start=NULL,*newl=NULL,*end=newl;
int data;
    while(1)
   {
   cout<<"\nEnter -999 at end\n";
   cout<<"Enter your input:-";
   cin>>data;
   if(data==-999)
    break;
   else
    {
      newl=new node;
      newl->num=data;
    if(start==NULL)
     {
        start=newl;
     }
     else
     {
        end->next=newl;
     }
      end=newl;
      end->next=start;
      }
   }
return(start);
}


void display(node *start)
{
node *head=start;
cout<<"\n\ndisplay function\n";
    while(start->next!=head)
    {
    cout<<start->num;
        if(start->next!=head)
            cout<<"==>";
      if(start->next->next==head)
          cout<<start->next->num;
    start=start->next;
    }
}


int count(node *start)
{
node *head=start;
int c=1;
while(start->next!=head)
{
    start=start->next;
   c++;
}
return(c);
}


node *insert(node *start)
{
clrscr();
int pos,count=1,choice;
node *newl,*cnt=start,*head=start,*check=start;
if(start==NULL)
    cout<<"\n\nLIST IS EMPTY\n";

cout<<"\n\nChoose your Choice\n";
cout<<"1)    Inserting At FIRST POSITION\n";
cout<<"2)    Inserting In BETWEEN\n";
cout<<"3)    Inserting At LAST POSITION \n";
cout<<"4)    Exit\n";
cout<<"Enter your choice:-";
cin>>choice;

if(choice >=1 && choice <=3)
{
    cout<<"\n\nEnter Integer Number:-";
    newl=new node;
    cin>>newl->num;
}

switch(choice)
{
    case 1 :          //for First position
                       newl->next=head;
                          head=newl;
                      while(start->next!=check)
                         start=start->next;
                  start->next=head;
                          break;

   case 2 :          //for Middle position
                       read:
                       cout<<"\n\nAt which position you want to insert element:-";
                        cin>>pos;
                        while(cnt->next!=check)
                        {
                        count++;                   //cnt for counting variable of type node
                        cnt=cnt->next;
                        }
                  if(pos==1 || pos==count+1)
                  {
                  cout<<"\n\nEntered Position Doesn't lies between the list\n";
                  goto read;
                  }
                        if(pos<1 || pos>count+1)
                  {
                        cout<<"\n\nEntered position is Invalid\nTRY AGAIN\n";
                        goto read;
                  }

		  {                    //Extra Braces are used as case bypasses intialization of a local variable
		  int c=1;
			while(c<pos-1)
                        {
                            c++;
                            start=start->next;
                        }
                  }
                        newl->next=start->next;
                        start->next=newl;
                       break;

   case 3 :        //for Last positionwhile(start->next!=check)
                            start=start->next;

                       start->next=newl;
                       newl->next=head;
                  break;

   case 4 :         goto out;

   default:       cout<<"\nEntered Choice is Invalid Try again\n";
                       break;

}
out:
return(head);
}



node *del(node *start)
{
clrscr();
int pos,count=1,choice;
node *cnt=start,*head=start,*temp,*check=start;
if(start==NULL)
{
    cout<<"\n\nLIST IS EMPTY\n";
   goto end;
}

cout<<"\n\nChoose your Choice\n";
cout<<"1)    Deleting  FIRST POSITION\n";
cout<<"2)    Deleting  In BETWEEN\n";
cout<<"3)    Deleting  LAST POSITION \n";
cout<<"4)    Exit\n";
cout<<"Enter your choice:-";
cin>>choice;
switch(choice)
{
    case 1 :          //for First position
                       temp=head;
                          head=head->next;
                      while(cnt->next!=check)
                                    cnt=cnt->next;
                  cnt->next=head;
                          break;

   case 2 :          //for Middle position
                       cnt=check;
                       read:
                       cout<<"\n\nAt which position you want to Delete element:-";
                        cin>>pos;
                        while(cnt->next!=check)
                        {
                        count++;                   //cnt for counting variable of type node
                        cnt=cnt->next;
                        }
                  if(pos==1 || pos==count)
                  {
                   cout<<"\n\nEntered Position Doesn't lies between the list\n";
                   goto read;
                  }
                        if(pos<1 || pos>count+1)
                       {
                        cout<<"\n\nEntered position is Invalid\nTRY AGAIN\n";
                        goto read;
                  }

		  {                    //Extra Braces are used as case bypasses intialization of a local variable
		  int c=1;
			while(c<pos-1)
                        {
                            c++;
                            start=start->next;
                        }
                  }
                        temp=start->next;
                       start->next=start->next->next;
                       break;

   case 3 :        //for Last positionwhile(start->next->next!=check)
                  {
                      start=start->next;
                  }
                      temp=start->next;
                      start->next=head;
                        break;

   case 4 :         goto out;

   default:       cout<<"\nEntered Choice is Invalid Try again\n";
                       break;

}
out:
delete(temp);
return(head);
end:
getch();
}
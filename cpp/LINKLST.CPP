//karan

#include"my.h"
struct emp
{
char info;
emp *dot;
};

void main()
{
 clrscr();
 emp  *first,*temp,*nod;
 int i,a;
 cout<<"give number of link list : ";
 cin>>i;
 first=new emp;
 temp=first;
// cout<<"info : ";
// cin>>first->info;

 for(a=1;a<=i;a++)
 {
 nod=new emp;
 cout<<"\n info : ";cin>>nod->info;
 temp->dot=nod;
 nod->dot=NULL;
 temp=nod;
 }
 temp=first;
 while(temp!=NULL)
 {
  cout<<"info : "<<temp->info;
  temp=temp->dot;
  }
  getch();
  }

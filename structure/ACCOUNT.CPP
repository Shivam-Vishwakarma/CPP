#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

class account

{
char user_name[30];
char password[20];
char user_id[20];
char data[100];

public:
account();
void newacc();
void login();
void show();
//void logout();
};
account :: account()
{
strcpy(user_name , "Null");
strcpy(password , "Null");
strcpy(user_id , "Null");
}
void account :: newacc()
{
cout<<"\n Enter user name : ";
gets(user_name);
cout<<"\n Create user id : ";
gets(user_id);
cout<<"\n Create password : ";
gets(password);
}

void account :: login()
{
	char i[30],p[20];
	strcpy(i,"");strcpy(p,"");
	cout<<endl<<"Enter user ID :";
	gets(i);
	cout<<endl<<"Enter password : ";
	gets(p);
     if(!strcmp(i,user_id) && !strcmp(p,password))
		{
		cout<<"\n Welcome "<<user_name;
		cout<<"\n Enter Data "<<endl;
		gets(data);
		cout<<endl<<"Enter any key to continue ";
		}

		else
		cout<<endl <<"Wrong Info !!!";
	getch();
}
void account :: show()
{
		char i[30],p[20];
		strcpy(p,"");strcpy(i,"");

	cout<<endl<<"Enter user ID :";
	gets(i);
	cout<<endl<<"Enter password : ";
	gets(p);
     if(!strcmp(i,user_id) && !strcmp(p,password))

		cout<<endl<<data;
	else
	{
		cout<<"Wrong info";
	}
}
void main()
{
	clrscr();
	account o1;
	int ch;
	while (1)

	{
	  clrscr();
	  cout<<endl<< "0. New accout ";
	  cout<<endl<< "1. Login ";
	  cout<<endl<< "2. Show ";
	  cout<<endl<< "3. Exit ";

	  cout<<"\n Enter choice : ";
	  cin>>ch;
	  switch (ch)
		{
		 case 0 : o1.newacc();break;
		 case 3 : exit (0);
		 case 2 : o1.show(); getch();break;
		 case 1 : o1.login(); break;
		 default : cout<<endl<<"Wrong Input !!!";
		}
	}
}


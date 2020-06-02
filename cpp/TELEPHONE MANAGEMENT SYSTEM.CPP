#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class tele
{
char name[40],adr[40],d[15],dt[15],bill,y;
long int teln,tc;
public:
    void add();
    void delee();
    void modify();
    void display();
    void detail();
    void printbill();
    void screen();
    void screen1();
    }t;

    void tele::add()
    {
    fstream f;
     f.open("bill.dat",ios::app|ios::binary);
     clrscr();
     char ans;
     do
     {
      screen();
      gotoxy(35,5);
      cout<<"ADD DATA";
      gotoxy(35,6);
      cout<<"^^^^^";
      gotoxy (17,9);
      cout<<"name:-";
      gets(name);
      gotoxy(17,10);cout<<"address:-";
      gets(adr);
      gotoxy(17,11);
      cout<<"last due date:-";
      gets(d);
      gotoxy(17,12);
      cout<<"telephone no:-";
      cin>>teln;
      gotoxy(17,13);
      cout<<"total calls:-";cin>>tc;
      gotoxy(17,14);
      cout<<"bill date:-";
      gets(dt);
      f.write((char*)&t,sizeof(t));
      screen();
      gotoxy(35,15);
      cout<<"enter any more records(y/n)?";
      ans=getchar();
      }
      while(ans=='y');
      }
       void tele::delee()
       {
       clrscr();

       int flag;
       long int n;
       char ans,ans1;

       do
       {
       flag=0;
       screen();
       fstream f,f1;
       f.open("bill.dat",ios::in|ios::binary);
       f1.open("bill.dat",ios::out|ios::binary);
       gotoxy(21,7);
       cout<<"deleting of record";
       gotoxy(21,8);
       cout<<"^^^^^^^^^^^^^^";
       gotoxy(15,10);
       cout<<"enter the tel.no whose record isto deleted";
       cin>>n;
       ans1='y';
       while(f)
       {
	f.read((char*)&t,sizeof(t));
	if(n==teln)
	{
	flag=1;
	gotoxy(12,13);
	cout<<"tel.no:-"<<teln;
	gotoxy(12,14);
		cout<<"name:-"<<name;
	gotoxy(12,14);
		cout<<"address:-"<<adr;
	gotoxy(12,16);
	cout<<"total calls:-"<<tc;
	gotoxy(12,17);
		cout<<"last due date:-"<<d;
	gotoxy(12,18);
	cout<<"bill date:-"<<dt;
	gotoxy(15,20);
	cout<<"are you sure you want to delete this record(y/n)?";
	ans1=getchar();
	}
	if((ans1=='n')||(n!=teln))
	{
	 f1.write((char*)&t,sizeof(t));
	 }
	 }
	 screen();
	 if(flag==0)
	 {
	gotoxy(20,10);
	cout<<"this record does not exist:-";
		gotoxy(20,11);
	cout<<"<<<<<<<<>>>>>>>>>";
		gotoxy(50,24);
	cout<<"press enter to continue";
	getch();
	}
	else
	if(flag==1&&ans1=='y')
	{
		gotoxy(20,12);
	cout<<"your record is deleted";
		gotoxy(20,13);
	cout<<"<<<<<<<<<<<>>>>>>>>>";
		gotoxy(50,24);
	cout<<"press enter to continue";
	getch();
	}
	f.close();
	f1.close();

	f.open("bill.dat",ios::out|ios::binary);
	f1.open("bill.dat",ios::in|ios::binary);
	while(f1)
	{
	f1.read((char*)&t,sizeof(t));
	f.write((char*)&t,sizeof(t));
	}
	f1.close();
	f.close();

	gotoxy(35,18);
	cout<<"do you want to delete more record(y/n)?";
	ans=getchar();
	}while(ans=='y');
	}
	void tele::modify()
	{
	int flag;
	long int n;
	char ans;
	fstream f,f1;
	do
	{
	clrscr();
	screen();
	gotoxy(15,7);
	cout<<"editing of record";
	gotoxy(15,8);
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^";
	f.open("bill.dat",ios::in|ios::binary);
	f1.open("billu.dat",ios::out|ios::binary);
	gotoxy(20,12);
	cout<<"enter telno. whose record is modifed";
	cin>>n;
	while(f)
	{
	flag=0;
	f.read((char*)&t,sizeof(t));
	if(teln==n)
	{
	flag=1;
	screen();
		gotoxy(17,8);
	cout<<"enter modified data";
		gotoxy(17,10);
	cout<<"name:-";
	gets(name);
		gotoxy(17,11);
	cout<<"address";
	gets(adr);
		gotoxy(17,12);
	cout<<"total calls";
	cin>>tc;
		gotoxy(17,13);
	cout<<"telephone number";
	cin>>teln;
		gotoxy(17,14);
	cout<<"last due date:-";
	gets(d);
		gotoxy(17,15);
	cout<<"bill date:-";
	gets(dt);
	}
	f1.write((char*)&t,sizeof(t));
	}
	if(flag==0)
	{
	screen();
		gotoxy(20,12);
	cout<<"this record doesnot exist";
		gotoxy(20,13);
	cout<<"^^^^^^^^";
		gotoxy(50,24);
	cout<<"press any key to continue";
	getch();
	}
	f.close();
	f1.close();
	f.open("bill.dat",ios::out|ios::binary);
	f1.open("billu.dat",ios::in|ios::binary);
	while(f1)
	{
	f1.read((char*)&t,sizeof(t));
	f.write((char*)&t,sizeof(y));
	}
	f.close();
	f1.close();
	screen();
	gotoxy(15,20);
	cout<<"do you want to modify more records(y/n)?";
	ans=getchar();
	}while(ans!='n');
	}

	void tele::detail()
	{
	clrscr();
	screen();
		gotoxy(15,7);
	cout<<"detail of telephone bill system";
		gotoxy(15,8);
	cout<<"^^^^^^^^";
		gotoxy(11,10);
	cout<<"this project is on prep[ration of telephone bills";
		gotoxy(11,11);
	cout<<"you are requried to input following information";
		gotoxy(11,13);
	cout<<"(1)client's telephone no:- teln";
		gotoxy(11,14);
	cout<<"(2)client's name:- name";
		gotoxy(11,15);
	cout<<"(3) client's address:- adr";
		gotoxy(11,16);
	cout<<"(4)total calls: tc";
		gotoxy(11,17);
	cout<<"(5)last due date:- d";
		gotoxy(11,18);
	cout<<"(6)bill date:-  dt";
		gotoxy(50,24);
	cout<<"press any key to continue:-";
	getch();
	}

	void tele::display()
	{
	char ans;
	int flag;
	long int n;
	fstream f,f1;
	do
	{
	flag=9;
	clrscr();
	screen();
		gotoxy(25,9);
	cout<<"viewing of records:-";
		gotoxy(25,10);
	cout<<"^^^^^^^^^^^";
		gotoxy(15,13);
	cout<<"enter client phone no";
		gotoxy(50,13);
	cout<<n;
		gotoxy(50,24);
	cout<<"press any key to continue";
	getch();
	f.open("bill.dat",ios::in|ios::binary);
	screen();
	while(f)
	{
	f.read((char*)&t,sizeof(t));
	if(n==teln)
	{
	flag=1;
		gotoxy(35,8);
	cout<<"telephone record";
		gotoxy(35,9);
	cout<<"^^^^^^^^^^";
		gotoxy(12,12);
	cout<<"telephone no:-"<<teln;
		gotoxy(12,13);
	cout<<"client name:-"<<name;
		gotoxy(12,14);
	cout<<"address:-"<<adr;
		gotoxy(12,15);
	cout<<"total calls:-"<<tc;
		gotoxy(12,16);
	cout<<"last due date:-"<<d;
		gotoxy(12,17);
	cout<<"bill date:-"<<dt;
	}
	}
	f.close();
	if(flag==0)
	{
		gotoxy(20,12);
	cout<<"your record does not exist";
		gotoxy(20,13);
	cout<<"************";
	}
	gotoxy(50,24);
	cout<<"press any key to continue";
	getch();
	clrscr();
	screen();
	gotoxy(20,12);
	cout<<"do you want to view more records(y/n)?";
	ans=getchar();
	}while(ans=='y');
	}

	void tele::printbill()
	{
     float ba,msc,ta,eba;
	clrscr();
	fstream f;
	f.open("bill.dat",ios::in|ios::binary);
	while(f)
	{
	f.read((char*)&t,sizeof(t));
	ba=0.0;

	eba=msc=0.0;
	if(tc>150&&tc<=250)
	{
	tc-150;
	ba=0.8*(tc-150);
	}
	else
	if(tc>250)
	{
	tc-150;
	ba=2*(tc-250)+80;
	}
	else
	{

	}
	msc=0.05*(ba+360);
	ta=ba+360+msc;
	eba=ta+20;
	screen1();
		gotoxy(25,4);
	cout<<"department of telecommunication";
		gotoxy(30,5);
	cout<<"meerut telecom district";
		gotoxy(30,6);
	cout<<"-.-.-.-.-.-.-.-.";
		gotoxy(33,7);
	cout<<"telephone bill";
		gotoxy(33,8);
	cout<<"-.-.-.-.-.-.-.-.";
		gotoxy(17,9);
	cout<<"to";
		gotoxy(20,10);
	puts(name);
		gotoxy(20,11);
	puts(adr);
		gotoxy(15,12);
	cout<<"---------------------";
		gotoxy(17,13);
	cout<<"telephone no";
		gotoxy(32,13);
	cout<<"bill date";
		gotoxy(47,13);
	cout<<"payable upto";
		gotoxy(19,14);
	cout<<"teln";
		gotoxy(34,14);
	cout<<"dt";
		gotoxy(50,14);
	cout<<"d";
		gotoxy(15,15);
	cout<<"-----------------";
		gotoxy(17,16);
	cout<<"gross call";
		gotoxy(32,16);
	cout<<"free call";
		gotoxy(47,16);
	cout<<"net call";
		gotoxy(20,17);
	cout<<"tc";
		gotoxy(35,17);
	cout<<"150";
		gotoxy(15,18);
	cout<<"------------------";
		gotoxy(17,19);
	cout<<"rental amount:-360";
		gotoxy(37,19);
	cout<<"call charges:-"<<ba;
		gotoxy(17,20);
	cout<<"misc amount:-"<<msc;
		gotoxy(43,20);
	cout<<"total amount:-"<<ta;
		gotoxy(17,21);
	cout<<"amount after due date:-"<<eba;
		gotoxy(50,24);
	cout<<"press any key to continue";
	getch();
	}
	f.close();
	}

	void main()
	{
	int ch;
	do
	{
	 clrscr();
	 t.screen();
		gotoxy(35,5);
	cout<<"telephone bill system";
		gotoxy(35,6);
	cout<<"***************";
		gotoxy(12,8);
	cout<<"(1)detail of bill system";
		gotoxy(12,9);
	cout<<"(2)add new phone connection";
		gotoxy(12,10);
	cout<<"(3)cut phone connection";
		gotoxy(12,11);
	cout<<"(4)any changes";
		gotoxy(12,12);
	cout<<"(5)search &see";
		gotoxy(12,13);
	cout<<"(6)bills please";
		gotoxy(12,14);
	cout<<"(7)quit off";
		gotoxy(12,15);
	cout<<"its your choice";
	cin>>ch;
	switch(ch)
	{
	case 1:t.detail();
	break;
	case 2:t.add();
	break;
	case 3:t.delee();
	break;
	case 4:t.modify();
	break;
	case 5:t.display();
	break;
	case 6:t.printbill();
	break;
	case 7:clrscr();
	t.screen();
		gotoxy(35,15);
	cout<<"thank you&goodbye";
		gotoxy(35,16);
	cout<<"++++++++++++++++";
		gotoxy(50,24);
	cout<<"press any key to continue";
	getch();
	break;
	default:clrscr();t.screen();
		gotoxy(35,12);
	cout<<"invalid choice";
		gotoxy(50,24);
	cout<<"press any key to continue";
	getch();
	}
	}while(ch!=7);
	}
	void tele::screen()
	{
	clrscr();
	int i,j;
	for(i=4;i<=22;i++)
	{
	gotoxy(10,i);
	cout<<'*';
	gotoxy(75,i);
	cout<<'*';
	}
	for(j=10;j<=75;j++)
	{
	gotoxy(j,4);
	cout<<'*';
	gotoxy(j,22);
	cout<<'*';
	}
	}
	void tele::screen1()
	{
	clrscr();
	int i,j;
	for(i=3;i<=23;i++)
	{
	gotoxy(15,i);
	cout<<"||";
	gotoxy(65,i);
	cout<<"||";
	}
	for(j=15;j<=65;j++)
	{
	gotoxy(j,3);
	cout<<"I";
	gotoxy(j,23);
	cout<<"I";
	}
	}






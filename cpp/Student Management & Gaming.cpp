//STUDENT MANAGEMENT & SNAKE AND LADDER GAME

//By Tom Thomas ( tomkrony@gmail.com )
//Downloaded From c4cpp.co.nr
//Password : abcde

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<time.h>
class student
{
	char name[50];
	int r_no;
	int classs;
	float marks;
	char grade;
	public:
	 int modify1();
	 void modification();
	 void getdata();
	 void display();
	 void search();
	 int getrno()
	 {
		return r_no;
	 }
};
student ob1[10],ob2,ob3[10],ob4;
void student::getdata()
{
		char ch;
		cin.get(ch);
		cout<<"\n\n\t\t\tEnter the roll number: ";
		cin>>r_no;
		cout<<"\n\t\t\tEnter name:";
		cin>>name;
		cout<<"\n\t\t\tEnter class:";
		cin>>classs;
		cout<<"\n\t\t\tEnter the marks:";
		cin>>marks;
		if(marks>=75)       grade='A';
		else if(marks>=60)  grade='B';
		else if(marks>=50)  grade='C';
		else if(marks>=40)  grade='D';
		else grade='F';
}
void student::display()
{
		cout<<" \nRoll no :"<<r_no;
		cout<<" \nName:"<<name ;
		cout<<"\nclass:"<<classs<<"\n"<<name<<"\t..has passed examz with  "<<marks<<"\t and grade:  "<<grade;
}

void student::modification()
{
	char clas[4];
	cout<<" rol no:"<<r_no<<"\n";
	cout<<"name: "<<name<<"\t class:"<<clas<<"\t marks"<<marks<<"\n";
	cout<<"\n enter new details";
	char nm[20]="  " , cl[4]="  ";
	float mks;
	cout<<"\n new name:(press . to retain old one) ";
	cin>>nm;
	cout<<"\n new class :(press . to retain old one) ";
	cin>>cl;
	cout<<"\n new marks:(press -1 to retain old one) ";
	cin>>mks;
	if(strcmp(nm,".")!=0)
		strcpy(name,nm);
	if (strcmp(cl,".")!=0)
		strcpy(clas,cl);
	if(mks!=-1)
	{
		marks=mks;
		if(marks>=75)       grade='A';
		else if(marks>=60)  grade='B';
		else if(marks>=50)  grade='C';
		else if(marks>=40)  grade='D';
		else grade='F';

	}

}
int passwords()
{

	char p1,p2,p3,p4,p5;
	gotoxy(30,10);
	cout<<"ENTER THE PASSWORD\n";
	gotoxy(30,20);
	p1=getch();
	cout<<"*";
	p2=getch();
	cout<<"*";
	p3=getch();
	cout<<"*";
	p4=getch();
	cout<<"*";
	p5=getch();
	cout<<"*";
	getch();
	gotoxy(30,20);
	if ((p1=='a'||p1=='A')&&(p2=='b'||p2=='B')&&(p3=='c'||p3=='C')&&(p4=='d'||p4=='D')&&(p5=='e'||p5=='E'))

		return 1;

	else
		return 0;
}
void draw_line(int n,char ch);
void board();
void gamescore(char name1[],char name2[],int p1, int p2);
void play_dice(int &score);
void draw_line(int n,char ch)
{
for(int i=0;i<n;i++)
cout<<ch;
}
void board()
{
clrscr();
cout<<"\n\n";
draw_line(50,'-');
cout<<"\n\t\tSNAKE AT POSITION\n";
draw_line(50,'-');
cout<<"\n\tFrom 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to 1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to 7\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\tFrom 44 to 22\n\n";
draw_line(50,'-');
cout<<"\n\t\t LADDER AT POSITION\n";
draw_line(50,'-');
cout<<"\n\tFrom 8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n";
draw_line(50,'-');
cout<<endl;
}
void gamescore(char name1[],char name2[],int p1, int p2)
{
cout<<"\n";
draw_line(50,'~');
cout<<"\n\t\tGAME STATUS\n";
draw_line(50,'~');
cout<<"\n\t--->"<<name1<<" is at position "<<p1<<endl;
cout<<"\t--->"<<name2<<" is at position "<<p2<<endl;
draw_line(50,'_');
cout<<endl;
}
void play_dice(int &score)
{
int dice;
dice=random(6)+1;
cout<<"\nYou got "<<dice<<" Point !! ";
score=score+dice;
cout<<"Now you are at position "<<score;
switch(score)
{
case 98 :score=28;break;
case 95 :score=24;break;
case 92 :score=51;break;
case 83 :score=19;break;
case 73 :score=1;break;
case 69 :score=33;break;
case 64 :score=36;break;
case 59 :score=17;break;
case 55 :score=7;break;
case 52 :score=11;break;
case 48 :score=9;break;
case 46 :score=5;break;
case 44 :score=22;break;
case 8 :score=26;break;
case 21 :score=82;break;
case 43 :score=77;break;
case 50 :score=91;break;
case 54 :score=93;break;
case 62 :score=96;break;
case 66 :score=87;break;
case 80 :score=100;
}
}
void main()
{

   cout<<"\t%%      %%      ";
       cout<<"\n\t%%      %% %%%%%%% %%      %%%%%%  %%%%%% %%%%  %%%% %%%%%%%";
       cout<<"\n\t%%      %% %%      %%      %%      %%  %% %%  %%% %% %%       ";
       cout<<"\n\t%%  %%  %% %%%%%   %%      %%      %%  %% %%  %%% %% %%%%%      ";
       cout<<"\n\t%%  %%  %% %%      %%      %%      %%  %% %%      %% %%           ";
       cout<<"\n\t%%%%%%%%%% %%%%%%% %%%%%%% %%%%%%% %%%%%% %%      %% %%%%%%%     ";
       cout<<"\n\n\t\t\t        $$$$$$$$  $$$$$        ";
       cout<<"\n\t\t\t           $$     $   $      ";
       cout<<"\n\t\t\t           $$     $$$$$    ";
 
       cout<<"\n\n\n\tCOMPUTER   PROJECT  (********  CCE Management  *******)";
       cout<<"\n\n\t\t\t\t       BY  :-";
		 cout<<"\n\n\t\t\t*  Tom Thomas"<<"\t  XII ";
		 cout<<"\n\n\t\t\t*  Kevin Philip"<<"\t  XII ";
		 cout<<"\n\n\t\t\t*  Manu Thomas"<<"\t  XII ";
       cout<<"\nPress any key to continue\n";
		 getch();
       clrscr();
	cout<<"\n\n\t\t\t MONTFORT SCHOOL ANAKKARA\n" ;
	cout<<"\t\t\t ************************\n";
	cout<<"\n\n\t\t    CONTINUOUS & COMPREHENSIVE EVALUATION(CCE)\n";
	cout<<"\t\t    **************************************** \n";
	int passwords();
	if(!passwords())
			{
				for(int i=0;i<2;i++)
				{
					clrscr();
					cout<<"\nWrong password try once more\n";
					if(passwords())
					{
					goto last;
					}
					else
					{
						clrscr();
						cout<<"\n\n\t\t\t all attempts failed.....";
						cout<<"\n\n\n\t\t\t see you.................. ";
						exit(0);
					}

				 }
			  cout<<"\t\t\t sorry all attempts failed............. \n \t\t\tinactive";
			 }
	else
	{        		clrscr();
						last:;
						clrscr();
						cout<<"loading/////////////////////////////////\n";
						int rn,tr,n,p,i=0,record=0;
						long pos;
						char ans;
						do
						{
                     clrscr();
							cout<<"\n\n\n\t\t\tMenu for displaying\entering data\n\n";
							cout<<"\t\t\t1.Enter the details\n\n";
							cout<<"\t\t\t2.Displaying the details\n\n";
							cout<<"\t\t\t3.searching details\n\n";
							cout<<"\t\t\t4.modification \n\n";
							cout<<"\t\t\t5.Gaming section \n\n";
							cout<<"\t\t\t6.Deletion\n\n";
							cin>>tr;
                     clrscr();
							switch(tr)
							{
								case 1:{ cout<<"\n\t\t\t Enter the NOs of students to be added\n";
											cin>>n ;
											p=n;
											ofstream cpp("name.txt",ios::app);
											for( i=0;i<n;i++)
											{
												ob1[i].getdata();
												cpp.write((char*)&ob1[i],sizeof(ob1[i]));
												record++;
											}
											cpp.close();
											clrscr();
											cout<<"\n\n\n Do you want to continue(y/n)";
											cin>>ans;
											break ;
										 }
								case 2:{

											ifstream cpp("name.txt",ios::app);
											cpp.seekg(0);
											cout<<"\nHow many details u have entered???\n";
											cin>>p;
											{
												for(i=0;i<p;i++)
												{
													cpp.read((char*)&ob1[i],sizeof(ob1[i]));
													ob1[i].display();
													cout<<"\n\n\n";
												}
											}
											cout<<"\n\n\t\t\t\n Do you want to go back to main menu???(y/n)";
											cin>>ans;
											cpp.close();
											break;
										 }
								case 3:{
											char found='n';
											ifstream cpp("name.txt",ios::in||ios::app);
											cout<<"\t\t\tEnter the roll no. to search \n";
											cin>>rn;
											cpp.seekg(0);
											while(!cpp.eof())
											{
                                 pos=cpp.tellg();
											cpp.read((char*)&ob2,sizeof(ob2));
											if(ob2.getrno()==rn)
											{
												found='y';
												ob2.display();
												break;
											}
											else cpp.seekg(pos,ios::cur);
											}
                                 if(cpp.eof()) cout<<"crasheddddd";
											if(found=='n')
												cout<<"\nRecord not found.....zzzzz\n";
											cout<<"\n\t\t\t\n\n Do you want to go back to main menu???(y/n)";
											cin>>ans;
											break;
										 }
								case 4:{
											char found='f';
											ofstream cpp("name.txt",ios::out||ios::app);
											ifstream cp("name.txt",ios::in||ios::app);
											cout<<"\t\t\tEnter the roll no. to be modified \n";
											cin>>rn;
											while(!cpp.eof())
											{
												pos=cp.tellg();
												cp.read((char*)&ob2,sizeof(ob2));
												if(ob2.getrno()==rn)
												{
													ob2.modification();
													cp.seekg(pos);
													cpp.write((char*)&ob2,sizeof(ob2));
													found='t';
													break;
												}
											}
											if(found=='f')
												cout<<"\nrecord not found\n";
											cpp.close();
											cp.close();
											ifstream cppp("name.txt",ios::in||ios::app);
											cppp.seekg(0);
											cout<<"\nWhich file you have modified(number)???\n";
											cin>>p;
											cout<<"\nNow the file contains\n";
											{
                                    clrscr();
												for(i=0;i<p;i++)
												{
													cppp.read((char*)&ob3[i],sizeof(ob3[i]));
													ob3[i].display();
												}
											}
											cout<<"\n\t\t\t\n Do you want to go back to main menu???(y/n)";
											cin>>ans;
											clrscr();
											cpp.close();
											break;
										 }
								case 6:{
											char found='f',confirm='n';
											ifstream cpp("name.txt",ios::in||ios::app);
											ofstream cp("temp.txt",ios::out||ios::app);
											cout<<"\nEnter the roll No. of the student to be deleted....\n";
											cin>>rn;
											while(!cpp.eof())
											{
												cpp.read((char*)&ob2,sizeof(ob2)) ;
												if(ob2.getrno()==rn)
												{
													ob2.display();
													found='t';
													cout<<"\nAre you want to delete this record\n";
													cin>>confirm;
													if(confirm=='n')
														cp.write((char*)&ob2,sizeof(ob2)) ;
												}
												else
													cp.write((char*)&ob2,sizeof(ob2)) ;
											}
											if(found=='f')
											cout<<"\nRecord not found!!!\n";
											cpp.close();
											cp.close();
											remove("name.txt");
											rename("temp.txt","stu.txt");
											cpp.open("name.txt",ios::in);
											cpp.seekg(0);
											cout<<"\nWhich file you have Deleted(number)???\n";
											cin>>p;
											cout<<"\nNow the file contains\n";
											for(int i=0;i<p;i++)
											{
													cpp.read((char*)&ob3[i],sizeof(ob3[i]));
													if(cpp.eof()) break;
													ob4.display();

											}
											cpp.close();
											break;
										 }
								case 5:{
                                 	int player1=0,player2=0,lastposition;
												char player1name[80],player2name[80];
												clrscr();
												randomize();
												draw_line(50,'=');
												cout<<"\n\n\n\n\t\tSNAKE LADDER GAME\n\n\n\n";
												draw_line(50,'=');
												cout<<"\n\n\nEnter Name of player 1 :";
												gets(player1name);
												cout<<"\n\n\Enter Name of player 2 :";
												gets(player2name);
												while(player1<=100 && player2<=100)
												{
												board();
												gamescore(player1name,player2name,player1,player2);
												cout<<"\n\n--->" <<player1name<<" Now your Turn >> Press any key to play ";
												getch();
												lastposition=player1;
												play_dice(player1);
												if(player1<lastposition)
												cout<<"\n\aOops!! Snake found !! You are at postion "<<player1<<"\n";
												else if(player1>lastposition+6)
												cout<<"\nGreat!! you got a ladder !! You are at position "<<player1;
												cout<<"\n\n--->"<<player2name<<" Now your Turn >> Press any key to play ";
												getch();
												lastposition=player2;
												play_dice(player2);
												if(player2<lastposition)
												cout<<"\n\n\aOops!! Snake found !! You are at position "<<player2<<"\n";
												else if(player2>lastposition+6)
												cout<<"\n\nGreat!! you got a ladder !! You are at position "<<player2<<"\n";
												getch();
												}
												clrscr();
												cout<<"\n\n\n";
												draw_line(50,'+');
												cout<<"\n\n\t\tRESULT\n\n";
												draw_line(50,'+');
												cout<<endl;
												gamescore(player1name,player2name,player1,player2);
												cout<<"\n\n\n";
												if(player1>=player2)
												cout<<player1name<<" !! You are the winner of the game\n\n";
												else
												cout<<player2name<<" !! You are the winner of the game\n\n";
												draw_line(50,'+');
												getch();
                                    break;
										 }
						}

	} while(ans=='Y'||ans=='y');
	getch();
}}
#include"my.h"
#include<fstream.h>



void main()
{
  clrscr();
  ofstream out("key.txt");
  char data[30];
  cout<<"enter text";
  cin.getline(data,30);
  out<<data;
  cout<<"before move:"<<out.tellp();
  out.seekp(0,ios::beg);
  cout<<"\nAfter move:"<<out.tellp();
  cout<<"enter a new text";
  cin.getline(data,30);
  out<<data;
  out.close();
  ifstream in("key.txt");
  in.seekg(5,ios::beg);
  while(in.eof()==0)
  {
  cout<<"\nget pointer:"<<in.tellg();
  in>>data;
  cout<<data;
  }
  in.close();
 getch();
}
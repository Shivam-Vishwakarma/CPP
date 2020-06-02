//to write/read a single character in a file
#include"my.h"
void main()
{
 clrscr();
 char str[30]="LNCT is in Bhedhaghat";
 char ch;
 int i,len,c=0;
 ofstream out("character.txt");
 len=strlen(str);
 for(i=0;i<len;i++)
 {
  out.put(str[i]);    //writting
 }

  out.close();
  ifstream in("character.txt");
  while(in.eof()==0)
  {


    in.get(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    //cout<<ch;
    c++;
  }
  cout<<"no of vovel in string"<<c;
  in.close();
 getch();
}
//wap to count line preset in a text file named "story.txt"
#include"my.h"
void CountLine()
{
ifstream f("STORY.TXT");
int lin=0;
char str[80];
while (f.getline(str,80))
{
lin++;
}
cout<<"\n No. of Lines :  "<<lin;
f.close();
}
void main()
{clrscr();
CountLine();
getch();
}
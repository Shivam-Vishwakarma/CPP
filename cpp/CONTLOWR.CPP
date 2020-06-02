//wap to count lower case alphabet present in a string.
#include"my.h"
void main()
{
const char ent='\n';
int cnt=0;
char ch;
cout<<"\n Enter character     ";
cin.get(ch);
while(ch!=ent)
{
if(ch>='a'&&ch<='z')
{
cnt++;
cout.put(ch);
}
cin.get(ch);
}
cout<<"\n the number of character are  "<<cnt;
getch();
}

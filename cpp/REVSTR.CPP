//reverse order of string
#include"my.h"
main()
{
clrscr();
char n[50];
cout<<"\n enter word  or sentence :  ";

gets(n);		//pdf of stdio.h to get the string with space.
cout<<"\n Actual String is  ";

puts(n);		//pdf of stdio.h to put the string with space.

int ln=strlen(n);	//pdf of string.h to count length of string.
cout<<"\n Reverse order of string is :  ";

//cout<<strrev(n);	//pdf of string.h to reverse the string.

for(int i=ln;i>=0;i--)
{
cout<<n[i];
}
getch();
}


/*
by udf read the content from a text file named "abc1.txt", and
count and display the number of alphabets present in it
*/

#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<fstream.h>
void alphabets()
{
	ifstream fin;
	fin.open("abc1.txt");
	char ch;
	int count=0;
	while(!fin.eof())
	{
		fin.get(ch);
		if(isalpha(ch))
			count++;

	}
	cout<<"Number of alphabets in file are "<<count;
	fin.close();
}
void main()
{
clrscr();
alphabets();
getch();
}

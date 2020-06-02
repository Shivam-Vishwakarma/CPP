// by UDF to count number of words in a text file named "abc1.txt"
#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void countwords()
{
	ifstream fin;
	fin.open("abc1.txt");
	char word[30];
	int count=0;
	while(!fin.eof())
	{
		fin>>word;
		count++;
	}
	cout<<"Number of words in file are "<<count;
	fin.close();
}
void main()
{
clrscr();
countwords();
getch();
}
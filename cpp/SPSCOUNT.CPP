//User defined function in C++ to count the number of blank present in a text file named "abc1.txt".
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void blankspace()
{
	ifstream fin;
	fin.open("abc1.txt");
	char ch;
	int count=0;
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch==' ')
			count++;
	}
	cout<<"Number of blank spaces in file are "<<count;
	fin.close();
}
main()
{
clrscr();
blankspace();
getch();
}
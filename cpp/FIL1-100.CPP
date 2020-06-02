//C++ program to write number 1 to 100 in a data file abc.txt

#include<fstream.h>
#include<iostream.h>
void main()
{
	ofstream fout;
	fout.open("abc.txt");
	for(int i=1;i<=100;i++)
		fout<<"\n"<<i;
	fout.close();
}

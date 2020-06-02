//Program to convert lowercase to uppercase and vice verse in C++
#include <iostream>
int main()
{
	char ch;
	
	cout<<"Please input a valid character (Alphabet): ";
	cin>>ch;
	//check for valid alphabet
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		//check case and convert into opposite case
		if(ch>='A' && ch<='Z')
			ch=ch+32;
		else if(ch>='a' && ch<='z')
			ch=ch-32;
		else
			;	//none
		
		cout<<"converted character is: "<<ch<<endl;
	}
	else
	{
		cout<<"Entered character is not a valid alphabet!!!"<<endl;
	}
	return 0;
}

/*
Output

First run:
Please input a valid character (Alphabet): H
converted character is: h

Second run:
Please input a valid character (Alphabet): h
converted character is: H

Third run:
Please input a valid character (Alphabet): &
Entered character is not a valid alphabet!!!

*/
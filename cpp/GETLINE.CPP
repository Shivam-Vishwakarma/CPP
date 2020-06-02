//Use of getline()
/*
The getline() and write() functions are useful in string input and output.

The getline() reads the string including white space.

The cin does not allow the string to enter with blank spaces.

The input reading is terminated when user presses the enter key.

The new line character is accepted but not saved and replaced
with the null character.

The object cin calls the function as follows:-

cin.getline(variable,size);

The object cout calls the function as follows:-

cout.write(variable,size);
*/

#include "myheader.h"

class first
{
 public:
	int age,n;
	char name[20];
	void input(void);
	void display(void);
};

void first::input(void)
{
 cout<<"Enter the name:";
 cin.getline(name,40);
 cout<<"Enter the age:";
 cin>>age;
}

void first::display(void)
{
 n=strlen(name);
 cout<<"\nLength of string is :"<<n<<"\n";
 cout.write(name,40);
 cout<<"\nage: "<<age;
}

void main()
{
 clrscr();
 first f;
 f.input();
 f.display();
 getch();
}


#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h >

class laptop
{
char name[20],ram[7],rom[7];
float price;
long double srn;
public:
	laptop();
	laptop(char*);
	laptop(char*, char*, char*);
	laptop(char*, char*, char*, float, long double);
	void show();
};
laptop :: laptop()
	{
	     strcpy(name,"----");
		strcpy(ram,"----");
		strcpy(rom,"----");
		price = 0;
		srn = 0000000;
	}
laptop :: laptop(char* n)
	{

	strcpy(name,n);
		strcpy(ram,"----");
		strcpy(rom,"----");
	price = 0;
	srn = 0000000;

	}
laptop :: laptop(char* n, char* r, char*R)
	{
	 strcpy(name,n);
		strcpy(ram,r);
		strcpy(rom,R);
	price = 0;
	srn = 0000000;
	}
laptop :: laptop(char* n, char* r, char* R, float p ,long double x)
	{
	 strcpy(name,n);
		strcpy(ram,r);
		strcpy(rom,R);
	price = p;
	srn = x;
	}
void laptop :: show()
	{
	cout<<endl;
	cout<<endl<<" NAME       : "<<name ;
	cout<<endl<<" RAM        : "<<ram ;
	cout<<endl<<" ROM        : "<<rom ;
	cout<<endl<<" SERIAL NUM : "<<srn ;
	cout<<endl<<" PRICE      : "<<price ;
	}
void main()
{
clrscr();
laptop o1,o2("DELL"),o3("MACBOOK","16GB","2TB"),o4("HP","16GB","1TB",48000,546465);
o1.show();
o2.show();
o3.show();
o4.show();
getch();
}

/*Simple Program for Copy Constructor

A constructor that initializes an object using value of another object
passed to it as parameter is called copy constructor
*/
#include<iostream.h>
#include<conio.h>
class copy
{
int var,fact;
public:copy(int temp)
       {  var = temp;  }
       double calculate()
       {
	   fact=1;
	 for(int i=1;i<=var;i++)
	{
	    fact = fact * i;
	}
	    return fact;
	}
};
void main()
{  clrscr();
    int n;
    cout<<"\n Enter the Number : ";
    cin>>n;
    copy obj(n);
    copy cpy=obj;
    cout<<"\n\t"<<n<<" Factorial is:"<<obj.calculate();
    cout<<"\n\t"<<n<<" Factorial is:"<<cpy.calculate();
    getch();
}
/*
Output:
Enter the Number: 5
Factorial is: 120
Factorial is: 120
*/
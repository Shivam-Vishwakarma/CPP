#include"my.h"
class A
{
public:
A()
{
cout << "\n Constructor called";
}

~A()
{
cout << "\n Destructor called";
}
};

int main()
{ clrscr();
A obj1;   // Constructor Called
int x=1;
if(x)
{
A obj2;  // Constructor Called
}   // Destructor Called for obj2
getch();
} //  Destructor called for obj1

/* Runtime polymorphism: This type of polymorphism is achieved by Function
Overriding.Function overriding on the other hand occurs when a derived
class has a definition for one of the member functions of the base class.
That base function is said to be overridden.
*/
// C++ program for function overriding
#include"my.h"

class Parent	// Base class
{
    public:
    void print()
    {
     cout <<"\n The Parent print function called ";
    }
};
class Child : public Parent	// Derived class
{
    public:
    // definition of a member function already present in Parent
    void print()
    {
     cout <<"\n The child print function called  ";
    }
};
void main()
{ clrscr();
Parent obj1;	    //object of parent class
Child obj2;         //object of child class
obj1.print();       // obj1 will call the print function in Parent
//obj2 will override the print() in Parent and call the print() in Child.
obj2.print();
getch();
}

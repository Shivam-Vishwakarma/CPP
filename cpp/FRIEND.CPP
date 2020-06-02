/* Friend Function

Friend function is a special type of function, which declares inside the
class. Friend function can access the private, protected and public data
of the class.

A keyword friend is used before return type of the function
declaration/prototype.

*/

// WAP to Implement Friend function in C++ with class.
#include <iostream.h>
#include"my.h"
class Number
{
private:
 int a;
public:
    void getNum(int x);
    friend void printNum(Number NUM);  //declaration of friend function
};
void Number::getNum(int x)  //class member function definitions
{
    a=x;
}
//friend function definition, no need of class name with SRO(::)

void printNum(Number NUM)
{
    cout << "Value of a (private data member of class Number): " << NUM.a;
}
int main()
{   clrscr();
    Number n; //Object declaration
    n.getNum(1000);
    printNum(n);
    return 0;
}


//    Output:
//    Value of a (private data member of class Number): 1000

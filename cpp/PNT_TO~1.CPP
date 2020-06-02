//implement the concept of pointer to member.

#include <iostream.h>

class MyClass
{
   public:
       int val;
       MyClass(int i)
       {
	  val = i;
       }
       int double_val()
       {
	  return val + val;
       }
};
int main()
{
   int MyClass::*data;   //data member pointer

   int(MyClass::*func)();   //function member pointer

   MyClass obj1(1), obj2(2);   //create objects

   data=&MyClass::val;   //get offset of data val

   func=&MyClass::double_val;   //get offset of function double_val()

   cout << "The values are: ";
   cout << obj1.*data <<"     "<< obj2.*data << "\n ";
   cout << "Here they are doubled:  ";
   cout << (obj1.*func)() <<"  " << (obj2.*func)() << "\n" ;
   return 0;
}

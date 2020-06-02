/*  public: anything outside the class can access it

    private: only this class can access it

    Protected, is also access specifier, and it is similar to private,
    it makes class member inaccessible outside the class. But they can be
    accessed by any subclass of that class. (If class A is inherited by
    class B, then class B is subclass of class A).

*/
#include"my.h"
class Test
{
public:  void fun()
	  {
	  pub= 0;
	  pro= 0;
	  pri= 0;
	  cout<<"\n private  "<<pri;
	  }
public:   	int pub;
protected:	int pro;
private:	int pri;
};
class Derived : public Test
{
public:	  void bar()
	  {
	    pub=0;
	    cout<<"\n public  "<<pub;
	    pro=0;
	    cout<<"\n protected  "<<pro;
	 //   pri=0;
	  //  cout<<"\n private  "<<pri;
	  }
};
class shivam
{
public:	  void test(Test &e)
	  {
	    e.pub = 0;
	 //   e.pro = 0;
	 //   e.pri = 0;
	  }
};
main()
{
clrscr();
Derived t;
t.fun();
t.bar();
getch();
}


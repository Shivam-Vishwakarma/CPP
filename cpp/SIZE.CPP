#include"my.h"
class A
{
public : A()
	{  cout<<"A"; 	}
	~A(){cout<<"~A"; }
};
class B
{
public : B()
	{  cout<<"B"; 	}
	~B(){cout<<"~B"; }
};

class C
{
public : C()
	{  cout<<"C"; 	}
	~C(){cout<<"~C"; }
private:        A b; B a;
};
class D
{
public : D()
	{  cout<<"D"; 	}
	~D(){cout<<"~D"; }
};

class E :public C
{
public : E()
	{  cout<<"E"; 	}
	~E(){cout<<"~E"; }
	private: D d; B b;
};

main()
{
clrscr();
E e;
cout<<"\n";


cout<<"\n used byts by b1 obj  "<<sizeof(e);
getch();
}


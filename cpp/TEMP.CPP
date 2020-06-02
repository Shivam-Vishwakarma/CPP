#include"my.h"
class a
{
public : int a[5],b;
};
class b: public a
{
public: int z;
};
main()
{
b b1;
cout<<"\n used byts by b1 obj  "<<sizeof(b1);
}


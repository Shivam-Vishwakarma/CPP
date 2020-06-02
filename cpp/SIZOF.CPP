#include"my.h"
class abc
{
long l;
float f;
char c;
public:void show()
{
cout<<"\n size of l obj is "<<sizeof(l);
cout<<"\n size of f obj is "<<sizeof(f);
cout<<"\n size of c obj is "<<sizeof(c);
}
};
main()
{ clrscr();

abc r,s,t;
r.show();
cout<<"\n size of r obj is "<<sizeof(r);
cout<<"\n size of s obj is "<<sizeof(s);
cout<<"\n size of t obj is "<<sizeof(t);
cout<<"\n size of class abc  is "<<sizeof(abc);
getch();
}

#include"my.h"
class a
{
public: int static cbse(int x)
	{
	if(x<100)
	x=cbse(x+10);
	return(x-1);
	}
};
void main()
{
a b;
int x=b.cbse(60);
cout<<x;
getch();
}


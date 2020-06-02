#include<conio.h>
#include<iostream.h>
int c=0;
class num
{
  public:

	  num()
	  {
	  c++;
	  cout<<"\ncreate object:"<<c;
	  }

	  ~num()
	  {
	   cout<<"\ndelete object:"<<c;
	   c--;
	  }


};

void main()
{
 clrscr();
  num M;
  {
  num N;
  }
  getch();
}
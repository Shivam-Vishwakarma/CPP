/*
rt  fn(ag);  //decl/sign/proto type of fun

1.	no return and no argument
	void sum();
2.	no return but argument
	void sum(int a,int b);
3.	return but no argument
	int sum();
4.	return  and also argument
	int sum(int a,int b);
	int a,b

*/

#include"my.h"

void sq(int no);
void sq(int no)
{
int s=no*no;
cout<<"\n the squar of given no is "<<s;
}
main()
{
clrscr();

int t;
cout<<"\n enter no ";
cin>>t;
sq(t);
//cout<<"\n suq is "<<s1;
getch();
}














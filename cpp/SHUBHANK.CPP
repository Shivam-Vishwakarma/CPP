# include <iostream.h>
# include <conio.h>
void swap (int a,int b)
{
int c;
c=a;
a=b;
b=c;
cout<<endl<<a<<b;
}
void main()
{
int i,j;
i=30;
j=40;
swap (i,j);
cout<<i<<j;
getch();
}

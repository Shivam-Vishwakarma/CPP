#include<iostream.h>
#include<conio.h>
double cube (double c)
{
return c*c*c;
}

void main()
{
clrscr();
double c;
cout<<"\n enter a num to find its cube : ";
cin>>c;
cout<<"cube of "<<c<<" = "<<cube(c);
getch();
}






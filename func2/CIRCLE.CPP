#include<iostream.h>
#include<conio.h>
float circum (float r)
{
return (2*3.14*r);
}
float dia (float r)
{
return (2*r);
}
float area (float r)
{
return (3.14*r*r);
}

void main()
{
clrscr();
float c;
cout<<"\n enter radius of circle : ";
cin>>c;
cout<<"\ndia = "<<dia(c);
cout<<"\ncircumference = "<<circum(c);
cout<<"\narea = "<<area(c);
getch();
}


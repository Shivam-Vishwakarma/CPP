#include<iostream.h>
#include<conio.h>
int main()
{clrscr();
void swap(int,int);
int a,b;
a=7;
b=4;
cout<<"\noriginal values are:\n";
cout<<"a="<<a<<",b="<<b<<"\n";
swap(a,b);
cout<<"\nThe values after swap() are:\n" ;
cout<<"a="<<a<<",b="<<b<<"\n";
getch();
return 0;
}
void swap(int x,int y)
int temp;
temp = x;
x=y;
y= temp;
cout<<"\nSwaped values are:";
cout<<"a="<<x<<",b="<<y<<"\n";
}

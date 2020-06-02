//dynamic array
#include <iostream.h>
#include<conio.h>

void main ()
{
clrscr();
int* a ;  // Pointer to int, initialize to nothing.
int n;           // Size needed for array
cin >> n;        // Read in the size
a = new int[n];  // Allocate n ints and save ptr in a.
for (int i=0; i<n; i++)
{
cout<<"enter element:"<<i<<"=";
cin>>a[i];
}

for (i=0; i<n; i++)
{
cout<<a[i]<<"\n";
}

getch();
}


// program to accept N numbers and arrange it, in ascending order.
#include <iostream.h>
#include <conio.h>
void main()
{
    int i, j, a, n, no[30];
    cout<<"\n Enter the value of N    ";
    cin>>n;
    cout<<"\n Enter the numbers    ";
    for (i = 0; i < n; ++i)
    cin>>no[i];
    for (i = 0; i < n; ++i)
    {
	for (j = i + 1; j < n; ++j)
	{
	    if (no[i] >no[j])
	    {
		a =  number[i];
		no[i] = no[j];
		no[j] = a;
	    }
	}
    }
    cout<<"\n The ascending order are given below  \n";
    for (i = 0; i < n; ++i)
    cout<<"\n  "<<no[i];
}
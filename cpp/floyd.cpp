//C++ Program to display Floyd's Triangle.

#include <iostream>
int main()
{
    int rows,i,j,k=0;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;++j)
          cout<<k+j<<" ";
        ++k;
        cout<<endl;
    }
    return 0;
}
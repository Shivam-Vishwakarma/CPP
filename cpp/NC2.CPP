#include"my.h"

void func(int a[ ], int size)
{
int a2[20][20];
int i,j;
for(i = 0; i< size; i++)
{
for(j=0;j<size;j++)
{
if(i> j)
a2[i][j] = a[j];
else
a2[i][j] = 0;
cout<<a2[i][j]<<" ";
}
cout<<endl;
}
}
main()
{
int x[]={1,2,3,4};
func(x,3);
getch();
}

// print given pattern

/*



*       *
 *     *
  *   *
   * *
    *


*/

#include<iostream.h>
#include"my.h"
void main()
{
int i,j,n,s;
cout<<"Enter number of rows : ";
cin>>n;
cout<<"The V is : \n";
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
(i==j)?cout<<"*":cout<<" ";
for(j=n-1;j>=1;j--)
(i==j)?cout<<"*":cout<<" ";
cout<<endl;
}
getch();
}
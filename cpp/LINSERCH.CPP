//wap to perform Liner/Sequential Search.
/* In the liner search method each element compare to search element
until the desired element is found or list end.
note- we enter value in any order mean ascending or descending order.
*/
#include"my.h"
main()
{
int a[10],i,no,m,c=0;
cout<<"\n enter the size of arrary  ";
cin>>no;
cout<<"\n enter the elements of the arrary ";
for(i=0;i<=no-1;i++)
{
cin>>a[i];
}
cout<<"\n enter the number to be search  ";
cin>>m;
for(i=0;i<no-1;i++)
{
if(a[i]==m)
{
c=1;
break;
}}
if(c==0)
cout<<"\n the number is not found in the array list  ";
else
cout<<"\n the number is found form the arary list in the "<<i+1 <<" place  ";
getch();
}
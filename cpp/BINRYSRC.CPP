//wap to perform Binary Liner Search.
/* Binary Search will Search element at middle, if element is not found
in middle then it will split array into two parts and if element to be
searched is less than middle then it will search only in lower part and
if greater then searching only in upper part.

note-for Binary Searchh we enter value only in ascending order.
*/
#include"my.h"
main()
{
int a[10],fst,lst,mid,no,ser,i;
cout<<"\n enter the size of arrary  ";
cin>>no;
cout<<"\n enter the elements of the arrary ";
for(i=0;i<=no-1;i++)
{
cin>>a[i];
}
cout<<"\n enter the number to be search  ";
cin>>ser;
//calculate first,last and middle.

fst=0;
lst=no-1;
mid=(fst+lst)/2;
//start searching.
while(fst<=lst)
{
if(a[mid]==ser)
{
cout<<ser<<" found at place "<<mid+1;
break;
}
else if(a[mid]<ser)
fst=mid+1;
else
lst=mid-1;
mid=(fst+lst)/2;
}
if(fst>lst)
{
cout<<"\n not found "<<ser<<" is not present in the list ";
}
getch();
}

#include"my.h"
main()
{
int no,rev,sum=0;
cout<<"\n enter no of terms ";
cin>>no;
cout<<"\n the reverse order of no is  : ";
while(no>0)
{
rev=no%10;
cout<<rev;
no=(no-rev)/10;
sum=sum+rev;
}
cout<<"\n sum of reverse no is "<<sum;
getch();
}

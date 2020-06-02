//wap to check give no is perfect no or not.
/*
perfect number is a positive number which sum of all positive divisors
excluding that number is equal to that number. for example 6,28,496 and
8128 etc is the perfect number.
prove 6-
6 divisor are 1,2, and 3. sum of 1+2+3=6 [note- 6 is smallest perfect no]
prove 28-
28 divisor are 1,2,4,7 and 14. sum of 1+2+4+7+14=28

*/
#include"my.h"
main()
{
clrscr();
int no,i,sum=0;
cout<<"\n enter a number   ";
cin>>no;
for(i=1;i<no;i++)
{
if(no%i==0)
sum=sum+i;
}
if(sum==no)
cout<<"\n "<<i<<" is a perfect number ";
else
cout<<"\n"<<i<<" is not a perfect number ";
getch();

}
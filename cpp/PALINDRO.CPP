#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int x,no,rem,rev;
rev=0; x=no;
no=12321;
do
{
rem=no%10;
rev=(rev*10)+rem;
no=(no-rem)/10;

}while(no!=0);
if(rev=x)
{
cout<<"\n this number is palindrome ";
}
else
{
cout<<"\n this number is not palindrome ";
}
getch();
		 }
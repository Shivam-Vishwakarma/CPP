//wap to sum of two no.

#include<iostream.h>
#include<conio.h>
main()
{ clrscr();

float price,dis=12,disRs,pay;
cout<<"\n enter item price  ";
cin>>price;
disRs=(dis*price)/100;
pay=price-disRs;

cout<<"\n Bill   ";
cout<<"\n Actual Price of Item  "<<price;
cout<<"\n Discount in %  "<<dis;
cout<<"\n Discount in Rs.  "<<disRs;
cout<<"\n Payable Amount "<<pay;
getch();
}








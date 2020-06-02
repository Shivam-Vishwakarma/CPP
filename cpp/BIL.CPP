#include<iostream.h>
#include<conio.h>
void main()
{
float price,dis=12,disRs;
int payAmt;
cout<<"\n Enter Item Actual Price  ";
cin>>price;
disRs=(price*12)/100;
payAmt=price-disRs;
cout<<"\n \n ============ Bill Memo ==================== ";
cout<<"\n \n Actual Item Price               "<<price;
cout<<"\n \n Discount is %                   "<<dis<<"%";
cout<<"\n \n Discount in Rs.                 "<<disRs;
cout<<"\n \n Payable Amount after Discount   "<<payAmt;
cout<<"\n \n ============  Welcome =====================";
getch();
}



# include <iostream.h>
# include <conio.h>
main()
{
clrscr();
int ip,dr=12;
float dp,tp;
cout<<"\n enter the purchased item price";
cin>>ip;
dp=(ip*dr)/100;
tp=ip-dp;
cout <<"\n The item price="<<ip;
cout <<"\n discount rate ="<<dr;
cout <<"\n discount price="<<dp;
cout <<"\n final price   ="<<tp;
getch();
}

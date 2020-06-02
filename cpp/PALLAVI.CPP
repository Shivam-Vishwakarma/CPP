#include<iostream.h>
#include<conio.h>
void amount(int prin,int time=2,float rate=0.08) ;
void amount(int prin,int time,float rate)
{
cout<<"enter the pricipal,time,rate";
cin>>prin>>time>>rate;
cout<<(prin*time*rate)/100;
}
void main()
{
cout<<"case1";
amount(2800);
cout<<"case2";
amount(2000,3);
cout<<"case 3";
amount(3000,3,0.11);
cout<<"case 4";
amount(2500,0.12);
getch();
}                                    6

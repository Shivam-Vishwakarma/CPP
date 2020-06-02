#include"my.h"
#include<math.h>
main()
{
clrscr();
float a,b,c;
cout<<"\n enter any two no for swapping  ";
cin>>a>>b;
cout<<"\n \n ====================== ========================  ";
cout<<"\n \n The Actual Value of A  is  "<<a;
cout<<"\n \n The Actual Value of B  is  "<<b;
c=a;
a=b;
b=c;
cout<<"\n \n ===============================================  ";
cout<<"\n \n After Swapping Value of A  is  "<<a;
cout<<"\n \n After Swapping Value of B  is  "<<b;
getch();
}
#include"my.h"
main()
{
int no,r,c;
cout<<"\n enter no of terms ";
cin>>no;
  for(r=no;r>0;r--)
  {
     for(c=1;c<=r;c++)
     {
     cout<<"*";
     }

   cout<<"\n";
  }
getch();
}



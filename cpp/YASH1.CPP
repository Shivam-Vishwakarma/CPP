#include<iostream.h>
#include<conio.h>
void main()
{
 int a[3][3],b[3][3],c[3][3],i,j;
 clrscr();
 cout<<"\n Enter 1st matrix \n";
 for(i=0;i<=3;i++)
 {
 for(j=0;j<=3;j++)
 {
   cin>>a[i][j];
   }
  }
 cout<<"\nEnter 2nd matrix \n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<=3;j++)
  {
    cin>>b[i][j];
   }
  }
 cout<<"\n Additon of two matrix is= \n";
 for(i=0;i<=3;i++)
 {
   for(j=0;j<=3;j++)
   {
    c[i][j]=a[i][j]+b[i][j];
   }
 }
 for(i=0;i<=3;i++)
 {
 for(j=0;j<=3;j++)
 {
  cout<<c[i][j];
  }
 }
 getch();
}




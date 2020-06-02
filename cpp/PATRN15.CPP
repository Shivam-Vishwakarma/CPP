//PRINT GIVEN PATTERN

/*
         #
        *#*
       **#**
      ***#***
     ****#****

*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,n,s;
cout<<"Enter number of rows : ";
cin>>n;
for(i=1; i<=n; i++)
{
s=n-i;
while(s!=0)
{
cout<<" ";
s--;
}
for(j=i; j>=1; j--)
{
if(j==1)
cout<<"#";
else
cout<<"*";
}

for(k=2; k<=i; k++)
{
cout<<"*";
}
cout<<endl;
}
getch();
}
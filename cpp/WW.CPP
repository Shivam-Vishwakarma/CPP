#include"my.h"
int find(int a[],int n)
{
int s=a[0];
for(int x=1;x<n;x++)
if(a[x]<s)
a[x]=s;
return(s);
}
main()
{
int no[2];
no[1]=2;no[2]=5;
int x=2;
int j=find(no[2],x);
cout<<j;

}



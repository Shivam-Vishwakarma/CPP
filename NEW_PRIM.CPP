#include<iostream.h>
#include<conio.h>
#include<math.h>

void main(){
clrscr();
cout<<"Enter a num : ";
int p,np=0;

cin>>p;
int x = sqrt(p);

for(int i=2;i<x+1;i++)
{
if(p%i==0)
	{np=1;
	 break;}

}
if(np==1) cout<<"NOT PRIME";
else cout<<"PRIME";
getch();
}
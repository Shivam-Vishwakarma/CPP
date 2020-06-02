#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float p,c,cs,m,total,per;
cout<<"\n enter  marks of physics";
cin>>p;
cout<<"\n enter marks of maths ";
cin>>m;
cout<<"\n enter marks of chemistry";
cin>>c;
cout<<"\n entere marks of computer";
cin>>cs;

total=p+m+cs+c;
per=total/4;

if((p<40 && c<40)||(p<40 && m<40)||(p<40&&cs<40)||(c<40&&m<40)||(c<40 && cs<40)||(m<40 && cs<40))
cout<<"\n fail";
else if(p<40||c<40||m<40||cs<40)
cout<<"\n  compartment ";
else if(per>=90&&per<=100)
cout<<"\n merit div";
else if(per>=60&&per<90)
cout<<"\n Ird div";
else if(per>=45&&per<60)
cout<<"\n  IInd div";
else if(per>=40&&per<45)
cout<<"\n III div";

getch();
}


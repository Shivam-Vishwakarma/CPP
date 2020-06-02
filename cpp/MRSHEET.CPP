//wap to gen marksheet
#include<iostream.h>
#include<conio.h>
main()
{ clrscr();
float p,c,m,cs,total,per;
cout<<"\n enter marks of physics ";
cin>>p;
cout<<"\n enter marks of chemistry ";
cin>>c;
cout<<"\n enter marks of maths ";
cin>>m;
cout<<"\n enter marks of comp. science ";
cin>>cs;
total=p+c+m+cs;
per=total/4;
cout<<"\n ===================== MarkSheet =========================== ";
cout<<"\n Marks of Physics out of 100	       |	"<<p;
cout<<"\n Marks of Chemistry out of 100	       |	"<<c;
cout<<"\n Marks of Maths out of 100	       |	"<<m;
cout<<"\n Marks of Computer Science out of 100 |	"<<cs;
cout<<"\n Total Obtained Marks out of 400      |	"<<total;
cout<<"\n Total Obtained Percentage	       |	"<<per;
if( (p<40 && c<40) ||(p<40 &&m<40) ||(p<40 &&cs<40)||
(c<40&&m<40)||(c<40&&cs<40)||(m<40&&cs<40))
cout<<"\n Fail ";
else if (p<40 || c<40 || m<40 || cs<40)
cout<<"\n compartment ";
else if(per>=90 && per<=100)
cout<<"\n merit div ";
else if(per>=60 && per<90)
cout<<"\n Ist div ";
else if(per>=45 && per<60)
cout<<"\n IInd div ";
else if(per>=40 && per<45)
cout<<"\n IIIrd div ";
cout<<"\n ==============================================================";
getch();
}

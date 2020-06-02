#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{ int i,j,n,a,b,p,q,r,s,y,o;
char exname[10],num[5],x='A',l[30][1],c1,c2,t[100][10],m;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
cleardevice();
setfillstyle(1,15);
bar(1,1,getmaxx(),1);
bar(1,getmaxy(),getmaxx(),getmaxy());
bar(1,1,1,getmaxy());
bar(getmaxx(),1,getmaxx(),getmaxy());
setfillstyle(1,8);
bar(getmaxx()-170,80,getmaxx()-20,getmaxy()-30);
outtextxy(20,10,"WORKSHEET");
line(1,33,700,33);
for(i=50;i<=450;i+=20)
line(20,i,460,i);
for(i=20;i<=460;i+=40)
line(i,50,i,450);
for(i=40,j=0;i<480;i+=40,x++,j++)
{
sprintf(l[j],"%c",x);
outtextxy(i,40,l[j]);
}
for(i=60,y=1;i<450;i+=20,y++,j++)
{
sprintf(l[j],"%d",y);
outtextxy(4,i,l[j]);
}
outtextxy(480,120,"press arrow keys");
outtextxy(480,130,"for moving");
outtextxy(480,150,"press ESC to exit");
a=24;b=55;p=24;
m='A';o=1;
setfillstyle(1,0);
for(i=0;i<=1000;i++)
{
bar(getmaxx()-120,59,getmaxx()-80,68);
sprintf(l[i],"(%c,%d)",m,o);
outtextxy(getmaxx()-120,60,l[i]);
  c1=getch();
  switch(c1)
   {
   case 0:
	   {
	     c2=getch();
		switch(c2)
		{
		case 72: if(o>1&&o<=20) {b-=20;a=p;o--;} break; //up
		case 80: if(o>=1&&o<20) {b+=20;a=p;o++;} break; //down
		case 75: if(m>'A'&&m<='K'){p-=40;a=p;m--;} break; //left
		case 77: if(m>='A'&&m<'K'){p+=40;a=p;m++;} break; //right
		}
	break;
	  }
   case 8 : a-=7;bar(a,b,a+7,b+7);break;
   case 27:return;
   default:
	   if(c1>=0||c1<=255)
	   {
	   sprintf(t[i],"%c",c1);
	   outtextxy(a,b,t[i]);
	   a+=7;
	   }



   }
}
l2:getch();
closegraph();
}
#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<stdio.h>
void main()

{
int ch;
float f;
int x=140,y=200;
int gd=DETECT,gm;
int p,q,l=150;
char xy[1];
sprintf(xy,"%c",14);
initgraph(&gd,&gm,"c:\\tc\\bgi");
setbkcolor(LIGHTBLUE);
setfillstyle(1,15);
bar(0,0,getmaxx(),2);
bar(0,getmaxy()-2,getmaxx(),getmaxy());
bar(0,0,2,getmaxy());
bar(getmaxx()-2,0,getmaxx(),getmaxy());

bar(5,5,getmaxx()-5,5);
bar(5,getmaxy()-5,getmaxx()-5,getmaxy()-5);
bar(5,5,5,getmaxy());
bar(getmaxx()-5,5,getmaxx()-5,getmaxy()-5);

for(int i=1;i<11;i++,x+=45)
{
if(i==4||i==8) x-=20;
setfillstyle(1,3);
bar(x,y,x+1,y+100);
setfillstyle(1,15);
bar(x+1,y,x+21,y+100);
setfillstyle(1,3);
bar(x+22,y,x+23,y+100);
}
x=165;
  setfillstyle(1,8);

for( i=1;i<=9;i++,x+=45)
{
  if(i==3||i==7)
  {
  x-=20;continue;   }
  bar(x,y,x+21,y+50);
  }

for(i=1,p=19,q='C';i<11;i++)
{
if(i==4||i==8)
 p-=4;
if(q=='H') q='A';
gotoxy(p,18);
printf("%c",q);
q++;
p+=6;

}
for(i=1,p=22,q='C';i<=9;i++,q++)
{
  if(i==3||i==7)
  {
  p+=2;
  continue;
  }
  gotoxy(p,14);
  if(q=='H')q='A';
  printf("%c#",q);
  p+=6;
}
outtextxy(10,10," Use these keys :");
outtextxy(10,25,"   W   E      T   Y   U      O   P");
outtextxy(10,40," A   S   D  F   G   H   J  K   L   ;");
outtextxy(10,58,"Enter esc to exit !!!");
setfillstyle(1,LIGHTBLUE);
for(;;)
{
ch=getch();
if(ch==27) goto l1;
switch(ch)
{
case 'a':f=261.63;l=150;break;
case 'w':f=277.18;l=174;break;
case 's':f=293.66;l=192;break;
case 'e':f=311.13;l=217;break;
case 'd':f=329.63;l=235;break;
case 'f':f=349.23;l=260;break;
case 't':f=369.99;l=286;break;
case 'g':f=392.00;l=307;break;
case 'y':f=415.30;l=331;break;
case 'h':f=440.00;l=354;break;
case 'u':f=466.16;l=376;break;
case 'j':f=493.88;l=400;break;
case 'k':f=523.25;l=423;break;
case 'o':f=554.37;l=448;break;
case 'l':f=587.33;l=470;break;
case 'p':f=622.25;l=492;break;
case ';':f=659.25;l=513;break;
case '.':f=246.96;break;
default:f=0;
}
for(i=0;i<50;i++)
	{
	outtextxy(l,185,xy);
	sound(f);
	delay(2);
	}
	nosound();
	bar(l-2,180,l+7,195);

}
l1:
closegraph();
}






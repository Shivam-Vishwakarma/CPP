#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int x=0;
void jump()
{
int i,j;
cleardevice();
for(j=0,i=0;i<=200;i++,x++)
{
cleardevice();
setfillstyle(9,6);
bar(1,400,1000,450);

setfillstyle(1,7);
bar(10+i,395-j,25+i,399-j);
bar(45+i,395-j,65+i,399-j);
bar(15+i,389-j,25+i,394-j);
bar(45+i,389-j,55+i,394-j);
setfillstyle(1,BLUE);
bar(18+i,381-j,29+i,388-j);
bar(41+i,381-j,52+i,388-j);
bar(30+i,381-j,40+i,383-j);
bar(23+i,373-j,47+i,380-j);
bar(27+i,358-j,32+i,372-j);
bar(32+i,367-j,43+i,372-j);
bar(38+i,363-j,43+i,366-j);
setfillstyle(1,RED);
bar(33+i,358-j,38+i,366-j);
bar(38+i,358-j,43+i,362-j);
bar(43+i,362-j,55+i,373-j);
bar(55+i,366-j,60+i,373-j);
bar(48+i,374-j,52+i,377-j);
bar(18+i,358-j,26+i,372-j);
bar(18+i,372-j,22+i,375-j);
bar(10+i,367-j,18+i,372-j);
bar(15+i,363-j,18+i,367-j);
setfillstyle(1,6);
bar(10+i,373-j,17+i,383-j);
bar(17+i,376-j,22+i,380-j);
bar(48+i,376-j,52+i,380-j);
bar(53+i,373-j,60+i,383-j);
bar(22+i,348-j,38+i,357-j);
bar(39+i,353-j,50+i,357-j);
bar(30+i,336-j,38+i,347-j);
bar(25+i,340-j,29+i,344-j);
bar(39+i,344-j,43+i,348-j);
bar(43+i,336-j,48+i,343-j);
bar(48+i,340-j,55+i,343-j);
bar(48+i,344-j,60+i,348-j);
bar(18+i,340-j,21+i,348-j);                      //face
setfillstyle(1,8);
bar(22+i,340-j,26+i,347-j);
bar(26+i,345-j,29+i,347-j);
bar(18+i,336-j,29+i,340-j);
bar(14+i,340-j,17+i,348-j);
bar(14+i,349-j,21+i,352-j);
bar(39+i,349-j,56+i,352-j);
bar(44+i,344-j,48+i,348-j);
bar(39+i,336-j,43+i,344-j);             //hair
setfillstyle(1,RED);
bar(18+i,332-j,56+i,335-j);
bar(22+i,327-j,43+i,332-j);
setfillstyle(1,YELLOW);
bar(28+i,373-j,31+i,376-j);
bar(39+i,373-j,42+i,376-j);
delay(4);
if(i>100) j--;
else j++;
}

}
/*void obj1(int i)   //bar
{
for(int j=700;j<800;j+=15)
{ bar(j-i,280,(j+10)-i,290);
  //bar(j-i,295,(j+10)-i,305);
} delay(10);
} */
void main()
{ int i,j,c;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setbkcolor(LIGHTBLUE);
setfillstyle(1,6);
printf("\n\n\n\n\n\n\t\t\t\tpress key to start game ");
getch();
clrscr();

for(i=0;i<=1000;i++,x++)
{
c=getch();
cleardevice();
setfillstyle(9,6);
bar(1,400,1000,450);

setfillstyle(1,7);
bar(10,395,25,399);
bar(45,395,60,399);
bar(15,389,25,394);
bar(45,389,55,394);
setfillstyle(1,BLUE);
bar(18,381,29,388);
bar(41,381,52,388);
bar(30,381,40,383);
bar(23,373,47,380);
bar(27,358,32,372);
bar(32,367,43,372);
bar(38,363,43,366);
setfillstyle(1,RED);
bar(33,358,38,366);
bar(38,358,43,362);
bar(44,362,55,373);
bar(55,366,60,373);
bar(48,374,52,377);
bar(18,358,26,372);
bar(18,372,22,375);
bar(10,367,18,372);
bar(15,363,18,367);
setfillstyle(1,6);
bar(10,373,17,383);
bar(17,376,22,380);
bar(48,376,52,380);
bar(53,373,60,383);
bar(22,348,38,357);
bar(39,353,50,357);
bar(30,336,38,347);
bar(25,340,29,344);
bar(39,344,43,348);
bar(43,336,48,343);
bar(48,340,55,343);
bar(48,344,60,348);
bar(18,340,21,348);                      //face
setfillstyle(1,8);
bar(22,340,26,347);
bar(26,345,29,347);
bar(18,336,29,340);
bar(14,340,17,348);
bar(14,349,21,352);
bar(39,349,56,352);
bar(44,344,48,348);
bar(39,336,43,344);             //hair
setfillstyle(1,RED);
bar(18,332,56,335);
bar(22,327,43,332);
setfillstyle(1,YELLOW);
bar(28,373,31,376);
bar(39,373,42,376);
if(c=='d')
 jump();

/*obj1(i);
obj1(i+200);
obj1(i+300);*/

setfillstyle(9,6);
bar(1,400,1000,450);
delay (7);
}
getch();
closegraph();
}




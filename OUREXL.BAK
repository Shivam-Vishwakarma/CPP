#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void worksheet()
{
float cel[20][11]={0},cs;
int i,j,n,a,b,p,q,r,s,y,o,c,u,f;
char exname[10],num[5],x='A',l[30][1],c1,c2,t[100][10],m,cell[20][11][7]={'\0'};
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
c=0;
u=0;
for(i=0;i<=1000;i++)
{
if(c==5)c=0;
bar(getmaxx()-120,7,getmaxx()-10,16);
outtextxy(getmaxx()-100,10,cell[o-1][u]);
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
		case 72: if(o>1&&o<=20) {cel[o-1][u]=atof(cell[o-1][u]);b-=20;a=p;o--;c=0;} break; //up
		case 80: if(o>=1&&o<20) {cel[o-1][u]=atof(cell[o-1][u]);b+=20;a=p;o++;c=0;} break; //down
		case 75: if(m>'A'&&m<='K'){cel[o-1][u]=atof(cell[o-1][u]);u--;p-=40;a=p;m--;c=0;} break; //left
		case 77: if(m>='A'&&m<'K'){cel[o-1][u]=atof(cell[o-1][u]);u++;p+=40;a=p;m++;c=0;} break; //right
		}
	break;
	  }
   case 8 : a-=7;bar(a,b,a+7,b+7);break;
   case 27:return;
   case 43:
		{        f=0;cs=0;
		bar(getmaxx()-380,7,getmaxx()-10,16);
			for(char lt[10]={'\0'};f<20;f++)
			  cs+=cel[f][u];
			  sprintf(lt,"%c %f",228,cs);
			  outtextxy(getmaxx()-400,10,lt);

		}   break;


   default:
	   if(c1>=0||c1<=255)
	   {
	   sprintf(t[i],"%c",c1);
	   cell[o-1][u][c]=c1;
	   c++;
	   outtextxy(a,b,t[i]);
	   a+=7;
	   }
   }
 }
}
void pie()
{
cleardevice();

int n,a[20]={0};
char l[20][10];
float af;
int fp,fc,sa[21],ea[21],t=0,x,y,p,q;
x=getmaxx()/2;
y=getmaxy()/2;
printf("\n enter num of values for pie chart : ");
scanf("%d",&n);
printf("\n enter values \n");
for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]); t+=a[i];
	}
	af=(float)360/t;
sa[0]=0;
for(i=0;i<n;i++)
{
ea[i]=sa[i]+(int)(a[i]*af);
sa[i+1]=ea[i];
}
ea[n-1]=360;
fp=4;
fc=1;

printf("\n press any key to print chart");
getch();
cleardevice();
setfillstyle(1,15);
bar(1,1,getmaxx(),1);
bar(1,getmaxy(),getmaxx(),getmaxy());
bar(1,1,1,getmaxy());
bar(getmaxx(),1,getmaxx(),getmaxy());

q=20;
for(i=0;i<n;i++,q+=14)
{
setfillstyle(++fp,++fc);
bar(20,q,28,q+8);
sprintf(l[i],"is for %d",a[i]);
outtextxy(35,q,l[i]);
pieslice(x,y,sa[i],ea[i],80);
}
settextstyle(11,0,3);
outtextxy(getmaxx()/2,25,"PIE CHART");
outtextxy(20,450,"press any key to continue......");
getch();
}
void bar_ch()
{
cleardevice();

int n,a[20],fp,fc,p,q;
char l[20][10];
printf("\n enter num of values for bar chart : ");
scanf("%d",&n);
printf("\n enter values \n");
for(int i=0;i<n;i++)
	scanf("%d",&a[i]);


printf("\n press any key to print chart");
getch();
cleardevice();
setfillstyle(1,15);
bar(1,1,getmaxx(),1);
bar(1,getmaxy(),getmaxx(),getmaxy());
bar(1,1,1,getmaxy());
bar(getmaxx(),1,getmaxx(),getmaxy());

fp=4;
fc=1;
p=250;
q=20;
for(i=0;i<n;i++,p+=28,q+=14)
{
	setfillstyle(++fp,++fc);
	bar(20,q,28,q+8);
	sprintf(l[i],"is for %d",a[i]);
	outtextxy(35,q,l[i]);
	bar(100,p,100+a[i],p+20);
}
settextstyle(11,0,3);
outtextxy(getmaxx()/2,25,"BAR CHART");
outtextxy(20,450,"press any key to continue......");
getch();
}
void bar3d_ch()
{
cleardevice();
setfillstyle(1,15);
int n,a[20],fp,fc,p,q=20;
char l[20][10];
printf("\n enter num of values for 3D bar chart : ");
scanf("%d",&n);
printf("\n enter values \n");
for(int i=0;i<n;i++)
	scanf("%d",&a[i]);


printf("\n press any key to print chart");
getch();
cleardevice();
setfillstyle(1,15);
bar(1,1,getmaxx(),1);
bar(1,getmaxy(),getmaxx(),getmaxy());
bar(1,1,1,getmaxy());
bar(getmaxx(),1,getmaxx(),getmaxy());

fp=4;fc=1;

p=200;
for(i=0;i<n;i++,p+=28,q+=14)
{
	setfillstyle(++fp,++fc);
	bar3d(100,p,100+a[i],p+20,5,1);
	bar(20,q,28,q+8);
	sprintf(l[i],"is for %d",a[i]);
	outtextxy(35,q,l[i]);
}

settextstyle(11,0,3);
outtextxy(getmaxx()/2,25,"3D-BAR CHART");
outtextxy(20,450,"press any key to continue......");
getch();
}
void charts()
{
int ch;char n=1;
l1:
cleardevice();
outtextxy(300,15,"TEXT DOC");
setfillstyle(1,15);
bar(1,1,getmaxx(),1);
bar(1,getmaxy(),getmaxx(),getmaxy());
bar(1,1,1,getmaxy());
bar(getmaxx(),1,getmaxx(),getmaxy());
for(int i=1,j=25;i<=25;i++,j--)
bar(1,1,j,i);
bar(1,25,25,25);
bar(25,1,25,25);
outtextxy(20,50,"1. Pie Chart ");
outtextxy(20,60,"2. Bar Chart ");
outtextxy(20,70,"3. 3D-Bar Chart ");
outtextxy(20,85,"   Enter your choice : ");
gotoxy(26,6);scanf("%d",&ch);
switch(ch)
{
case 1:pie();break;
case 2:bar_ch();break;
case 3:bar3d_ch();break;
default: outtextxy(20,100,"Wrong Input !!!");
	   outtextxy(20,120,"Press 1 for Re-input");
	   outtextxy(20,130,"Press any other key for exit");
	   n=getch();
	   if (n=='1')  goto l1;
	   else  goto l2;
}
l2:
cleardevice();
}
void textdoc()
{
int i,a,b,j;
char c1,c2,l[1000][1];
cleardevice();
outtextxy(300,15,"TEXT DOC");
setfillstyle(1,15);
bar(1,1,getmaxx(),1);
bar(1,getmaxy(),getmaxx(),getmaxy());
bar(1,1,1,getmaxy());
bar(getmaxx(),1,getmaxx(),getmaxy());
for(i=1,j=25;i<=25;i++,j--)
bar(1,1,j,i);
bar(1,25,25,25);
bar(25,1,25,25);
setfillstyle(1,8);
bar(50,50,getmaxx()-50,getmaxy()-50);
outtextxy(50,getmaxy()-25,"Press esc to exit...");
a=55;b=55;
for(i=0;i<=1000;i++)
{
  c1=getch();
  switch(c1)
   {
   case 8 : a-=7;setfillstyle(1,8);bar(a,b,a+7,b+7);break;
   case 13:a=55; b+=15; break;
   case 27:return;
   default:
	   if(c1>=0||c1<=255)
	   {
	   sprintf(l[i],"%c",c1);
	   outtextxy(a,b,l[i]);
	   a+=7;
	   }

   }
}

getch();
}

void startpage()
{
cleardevice();
bar(1,1,getmaxx(),1);
bar(1,getmaxy(),getmaxx(),getmaxy());
bar(1,1,1,getmaxy());
bar(getmaxx(),1,getmaxx(),getmaxy());
outtextxy(300,15,"OUR EXCEL");
setfillstyle(1,8);
bar(50,50,200,getmaxy()-75);
bar(50,getmaxy()-50,90,getmaxy()-35);
outtextxy(55,getmaxy()-47,"EXIT");
setfillstyle(1,7);
bar(250,50,325,150);
bar(375,50,450,150);
bar(500,50,575,150);
setfillstyle(1,15);
for(int i=1,j=25;i<=25;i++,j--)
bar(1,1,j,i);
bar(1,25,25,25);
bar(25,1,25,25);
for( i=50,j=75;i<=75;i++,j--)
bar(50,50,j,i);
bar(50,75,75,75);
bar(75,50,75,75);
for( i=250,j=70;i<=270;i++,j--)
bar(250,50,i,j);
bar(250,70,270,70);
bar(270,50,270,70);

for( i=375,j=70;i<=395;i++,j--)
bar(375,50,i,j);
bar(375,70,395,70);
bar(395,50,395,70);

for( i=500,j=70;i<=520;i++,j--)
bar(500,50,i,j);
bar(500,70,520,70);
bar(520,50,520,70);
for(j=80;j<=135;j+=5)
bar(255,j,320,j);
for(i=255;i<=320;i+=13)
bar(i,80,i,135);
outtextxy(280,53,"WORK");
outtextxy(280,62,"SHEET");
outtextxy(398,58,"CHARTS");
outtextxy(525,53,"TEXT");
outtextxy(525,62,"DOC");
setfillstyle(5,3);
bar3d(380,110,390,145,5,1);
setfillstyle(6,4);
bar3d(400,80,410,145,5,1);
setfillstyle(8,2);
bar3d(420,95,430,145,5,1);
setfillstyle(2,15);
bar(510,80,565,135);
outtextxy(270,156," (1)            (2)             (3)");
outtextxy(60,getmaxy()-30,"(4)");
outtextxy(85,70,"Let's get");
outtextxy(85,80,"Started...");
outtextxy(55,120,"WORKSHEET: It is");
outtextxy(55,130,"used for creating");
outtextxy(55,140,"tabular form of ");
outtextxy(55,150,"data.");
outtextxy(55,170,"CHARTS:It is used");
outtextxy(55,180,"for creating diff");
outtextxy(55,190,"kind of charts.You");
outtextxy(55,200,"can create a Pie,");
outtextxy(55,210,"Bar & 3D-bar chart");
outtextxy(55,230,"TEXT DOC:It is ");
outtextxy(55,240,"used for writing");
outtextxy(55,250,"simple text in a");
outtextxy(55,260,"document.");
outtextxy(450,425,"MADE BY:");
outtextxy(450,435,"Shivam Vishwakarma &");
outtextxy(450,445,"Prakriti Vishwakarma");
}
void main()
{
int ch,n=1;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
sv:
cleardevice();
startpage();
outtextxy(250,243,"Enter your choice : ");
gotoxy(52,16);
scanf("%d",&ch);
switch(ch)
{
case 1: worksheet();break;
case 2: charts();break;
case 3: textdoc();break;
case 4: goto out;break;
default : outtextxy(250,260,"Wrong Input !!!");
	    outtextxy(250,270,"Press 1 for Re-input");
	    outtextxy(250,280,"Press any other key for exit");
	    n=getch();
	    if(n=='1') goto sv;
	    else goto out;
}
goto sv;
out:
cleardevice();
printf("\n\n\n\n press any key to exit....");
getch();
closegraph();
}

#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void pie()
{
int n,a[20]={0};char l[20][10];
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
q=20;
for(i=0;i<n;i++,q+=14)
{
setfillstyle(++fp,++fc);
pieslice(x,y,sa[i],ea[i],80);
bar(20,q,28,q+8);
sprintf(l[i],"is for %d",a[i]);
outtextxy(35,q,l[i]);
}

settextstyle(11,0,3);
outtextxy(getmaxx()/2,25,"PIE CHART");
outtextxy(20,450,"press any key to continue......");
getch();
}
void bar_ch()
{
int n,a[20],fp,fc,p,q;
char l[10];
printf("\n enter num of values for bar chart : ");
scanf("%d",&n);
printf("\n enter values \n");
for(int i=0;i<n;i++)
	scanf("%d",&a[i]);


printf("\n press any key to print chart");
getch();
cleardevice();
fp=4;
fc=1;
p=250;
q=20;
for(i=0;i<n;i++,p+=28,q+=14)
{
	setfillstyle(++fp,++fc);
	bar(20,q,28,q+8);
	sprintf(l,"is for %d",a[i]);
	outtextxy(35,q,l);
	bar(100,p,100+a[i],p+20);
}
settextstyle(11,0,3);
outtextxy(getmaxx()/2,25,"BAR CHART");
outtextxy(20,450,"press any key to continue......");
getch();
}
void bar3d_ch()
{
int n,a[20],fp,fc,p,q=20;
char l[10];
printf("\n enter num of values for 3D bar chart : ");
scanf("%d",&n);
printf("\n enter values \n");
for(int i=0;i<n;i++)
	scanf("%d",&a[i]);


printf("\n press any key to print chart");
getch();
cleardevice();
fp=4;fc=1;
p=200;
for(i=0;i<n;i++,p+=28,q+=14)
{
	setfillstyle(++fp,++fc);
	bar3d(100,p,100+a[i],p+20,5,1);
	bar(20,q,28,q+8);
}
for(i=0,q=20;i<n;i++,q+=14)
{
	sprintf(l,"is for %d",a[i]);
	outtextxy(35,q,l);
}

settextstyle(11,0,3);
outtextxy(getmaxx()/2,25,"3D BAR CHART");
outtextxy(20,450,"press any key to continue......");
getch();
}



void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
pie();
cleardevice();
closegraph();
}




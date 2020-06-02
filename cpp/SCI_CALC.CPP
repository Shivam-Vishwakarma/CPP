#include"my.h"
main()
{
float s,d,m,mt,a,b,ans,dec,bin,oct,hex,r;
int ch,ar,wr;
mm:
clrscr();
printf("\n===================== WELCOME TO CALCULATOR==========================");
printf("\n\n CHOOSE FROM THE GIVEN OPTIONS:\n \t1.ARTHMATIC\n \t2.TRIGNOMETRIC RATIOS\n \t3.CONVERSION\n \t4.EXIT\nENTER YOUR CHOICE : ");
scanf("%d",&ch);
if(ch==4) goto ex;
else if(ch==1)
{     one:
	clrscr();
	printf("\n 1.ADDITION\n 2.SUBTRCTION\n 3.MULTIPLICATION\n 4.DIVISION \n");
	scanf("%d",&ar);

	if(ar==1)
	     {
		printf("\n ENTER TWO NOS. : ");
		scanf("%f %f",&a,&b);
		ans=a+b;
		}
	else if(ar==2)
	     {
		printf("\n ENTER TWO NOS. : ");
		scanf("%f %f",&a,&b);
		ans=a-b;
		}
	else if(ar==3)
	     {
		printf("\n ENTER TWO NOS. : ");
		scanf("%f %f",&a,&b);
		ans=a*b;
		}
	else if(ar==4)
	     {
		printf("\n ENTER TWO NOS. : ");
		scanf("%f %f",&a,&b);
		ans=a/b;
		}
	else
	{
	printf("\n WRONG INPUT !!!\n ENTER: \n\t1 FOR ARTHEMATIC MENU \n\t 2 FOR MAIN MENU \n\t 3 FOR EXIT  ");
	scanf("%d",&wr);
	if(wr==1) goto one;
	if(wr==2) goto mm;
	if(wr==3) goto ex;
	}

	printf("\n ANS = %f",ans);
}
else if(ch==2)
	{
	tri:
	clrscr();
	printf("\n 1.SIN\n 2.COS\n 3.TAN\n 4.SEC \n 5.COSEC\n 6.COT \n");
	scanf("%d",&ar);

	if(ar==1)
	     {
		printf("\n ENTER VALUE. : ");
		scanf("%f",&a);
		r=a*180/3.14;
		ans=sin(r);
		}
	else if(ar==2)
	     {
		printf("\n ENTER VALUE. : ");
		scanf("%f",&a);
		r=a*180/3.14;
		ans=cos(r);
		}
	else if(ar==3)
	     {
		printf("\n ENTER VALUE. : ");
		scanf("%f",&a);
		r=a*180/3.14;
		ans=tan(r);
		}
	else if(ar==4)
	     {
		printf("\n ENTER VALUE. : ");
		scanf("%f",&a);
		r=a*180/3.14;
		ans=1/cos(r);
		}
	else if(ar==5)
	     {
		printf("\n ENTER VALUE. : ");
		scanf("%f",&a);
		r=a*180/3.14;
		ans=1/sin(r);
		}
	else if(ar==6)
	     {
		printf("\n ENTER VALUE. : ");
		scanf("%f",&a);
		r=a*180/3.14;
		ans=1/tan(r);
		}
	else
	{
	printf("\n WRONG INPUT !!!\n ENTER: \n\t1 FOR TRIGNOMETRIC RATIOS MENU \n\t2 FOR MAIN MENU \n\t3 FOR EXIT  ");
	scanf("%d",&wr);
	if(wr==1) goto tri;
	if(wr==2) goto mm;
	if(wr==3) goto ex;
	}
	printf("\n ANS = %f",ans);

}
getch();
clrscr();
printf("\n ENTER:\n\t1 FOR MAIN MENU \n\t2 FOR EXIT  ");
	scanf("%d",&wr);
	if(wr==1) goto mm;
	if(wr==2) goto ex;
ex:
printf("\n PRESS ANY KEY TO EXIT ");
getch();
}

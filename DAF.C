#include<malloc.h>

int intmap[26][81];
char charmap[26][81];
int intmapint=0;
char charmapchar='#',iarr[10],t,transfer;
int setnodec=-1,coun,setndis=21000;
int LFC=-1,LOC=-1,UPC=-1,RC1=-1,RC2=-1,RC3=-1;
int xx=0,yy=0;
int settabx=-1,smlld,tpy;
int i,in=0,ncoun,l=1,tx,ty,fx,fy;
int aa=14,bb=12,cc=15,dd=4;



struct Nodeinfo{
  char noden;
  int posX,posY;
  int owndis;
  int lncost,rncost1,rncost2,rncost3,lowcost,uppcost;
  int tabx,taby;
  char checked;
  struct Nodeinfo *lnode,*rnode1,*rnode2,*rnode3,*lower,*upper;
};
struct Nodeinfo *temp,*start,*curr,*search,*cal,*smalln,*ltn;


struct T{
  char nn;
  int *ownadd;
  struct T *nnadd;
};
struct T *s,*c,*crenode,*find;


void instn(){
  int d=5;

  gotoxy(50,3);printf("INSTRUCTIONS %c",25);
  gotoxy(50,4);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205);

  gotoxy(32,d);
  printf("                /  \\          |     %c             ",24);gotoxy(32,d+1);
  printf("   (1)    (2) /      \\        |     |  (6) JUMP        ",179,179);gotoxy(32,d+2);
  printf(" ------->   /      (3) \\   (4)|  (5)|  (7) ANSWER    ",25,24);gotoxy(32,d+3);
  printf("          /              \\    |     |  (0) EXIT      ",179,179);gotoxy(32,d+4);
  printf("                              %c     |     ",25);gotoxy(32,d+5);
}

void straight(){

 gotoxy(curr->posX+1,curr->posY);
 charmap[curr->posY][curr->posX+1]='-';
 charmap[curr->posY][curr->posX+2]=' ';
 charmap[curr->posY][curr->posX+3]='-';
 charmap[curr->posY][curr->posX+4]=' ';
 charmap[curr->posY][curr->posX+5]='-';
 charmap[curr->posY][curr->posX+6]=' ';
 charmap[curr->posY][curr->posX+7]='-';
 charmap[curr->posY][curr->posX+8]='>';
 printf("------->");

 if(charmap[curr->posY][curr->posX+9]=='#'){
 temp=(struct Nodeinfo*) malloc (sizeof(struct Nodeinfo));
 temp->lncost=temp->rncost1=temp->rncost2=temp->rncost3=temp->lowcost=temp->uppcost=setnodec;
 temp->lnode=temp->rnode1=temp->rnode2=temp->rnode3=temp->lower=temp->upper=NULL;
 temp->owndis=setndis;
 temp->tabx=temp->taby=settabx;
 temp->checked='n';

 temp->noden=getche();
 curr->rnode1=temp;
 temp->lnode=curr;
 temp->posX=wherex()-1;
 temp->posY=wherey();
 charmap[temp->posY][temp->posX]=temp->noden;

 gotoxy((temp->posX)-5,(temp->posY));
  if(curr->rncost1==setnodec){
   scanf("%d",&curr->rncost1);
   intmap[(temp->posY)-1][(temp->posX)-4]=curr->rncost1;
  }
  else if(curr->rncost2==setnodec){
   scanf("%d",&curr->rncost2);
   intmap[(temp->posY)-1][(temp->posX)-4]=curr->rncost2;
  }
  else{
   scanf("%d",&curr->rncost3);
   intmap[(temp->posY)-1][(temp->posX)-4]=curr->rncost3;
  }

 curr=temp;

 crenode=(struct T*) malloc (sizeof(struct T));
 crenode->nn=temp->noden;
 crenode->ownadd=temp;
 crenode->nnadd=NULL;
 c->nnadd=crenode;
 c=crenode;
 }
 else{
  t=charmap[curr->posY][curr->posX+9];

   for(find=s;find->nn!=t;find=find->nnadd);
   temp=find->ownadd;

   gotoxy((temp->posX)-5,(temp->posY));
    if(curr->rncost1==setnodec){
    scanf("%d",&curr->rncost1);
    intmap[(temp->posY)-1][(temp->posX)-4]=curr->rncost1;
   }
   else if(curr->rncost2==setnodec){
    scanf("%d",&curr->rncost2);
    intmap[(temp->posY)-1][(temp->posX)-4]=curr->rncost2;
   }
   else{
    scanf("%d",&curr->rncost3);
    intmap[(temp->posY)-1][(temp->posX)-4]=curr->rncost3;
   }

   curr=temp;

 }
}


void upward(){

 gotoxy((curr->posX)+1,(curr->posY)-1);charmap[(curr->posY)-1][(curr->posX)+1]='/';
 printf("/");
 gotoxy((curr->posX)+3,(curr->posY)-2);charmap[(curr->posY)-2][(curr->posX)+3]='/';
 printf("/");
 gotoxy((curr->posX)+5,(curr->posY)-3);charmap[(curr->posY)-3][(curr->posX)+5]='/';
 printf("/");
 gotoxy((curr->posX)+7,(curr->posY)-4);charmap[(curr->posY)-4][(curr->posX)+7]='/';
 printf("/");

 if(charmap[(curr->posY)-4][(curr->posX)+8]=='#'){
 temp=(struct Nodeinfo*) malloc (sizeof(struct Nodeinfo));
 temp->lncost=temp->rncost1=temp->rncost2=temp->rncost3=temp->lowcost=temp->uppcost=setnodec;
 temp->lnode=temp->rnode1=temp->rnode2=temp->rnode3=temp->lower=temp->upper=NULL;
 temp->owndis=setndis;
 temp->tabx=temp->taby=settabx;
 temp->checked='n';

 temp->noden=getche();
 temp->posX=wherex()-1;
 temp->posY=wherey();
 charmap[temp->posY][temp->posX]=temp->noden;
 temp->lnode=curr;

 gotoxy((temp->posX-3),(temp->posY)+1);
  if(curr->rncost1==setnodec){
   curr->rnode1=temp;
   scanf("%d",&curr->rncost1);
   intmap[(temp->posY)+2][(temp->posX)-5]=curr->rncost1;
  }
  else if(curr->rncost2==setnodec){
   curr->rnode2=temp;
   scanf("%d",&curr->rncost2);
   intmap[(temp->posY)+2][(temp->posX)-5]=curr->rncost2;
  }
  else{
   curr->rnode3=temp;
   scanf("%d",&curr->rncost3);
   intmap[(temp->posY)+2][(temp->posX)-5]=curr->rncost3;
  }

 curr=temp;

 crenode=(struct T*) malloc (sizeof(struct T));
 crenode->nn=temp->noden;
 crenode->ownadd=temp;
 crenode->nnadd=NULL;
 c->nnadd=crenode;
 c=crenode;
 }
 else{
    t=charmap[(curr->posY)-4][(curr->posX)+8];

   for(find=s;find->nn!=t;find=find->nnadd);
   temp=find->ownadd;

   gotoxy((temp->posX-3),(temp->posY)+1);
  if(curr->rncost1==setnodec){
   curr->rnode1=temp;
   scanf("%d",&curr->rncost1);
   intmap[(temp->posY)+2][(temp->posX)-5]=curr->rncost1;
  }
  else if(curr->rncost2==setnodec){
   curr->rnode2=temp;
   scanf("%d",&curr->rncost2);
   intmap[(temp->posY)+2][(temp->posX)-5]=curr->rncost2;
  }
  else{
   curr->rnode3=temp;
   scanf("%d",&curr->rncost3);
   intmap[(temp->posY)+2][(temp->posX)-5]=curr->rncost3;
  }
   curr=temp;
 }
}

void downward(){

 gotoxy((curr->posX)+1,(curr->posY)+1);charmap[(curr->posY)+1][(curr->posX)+1]='\\';
 printf("\\");
 gotoxy((curr->posX)+3,(curr->posY)+2);charmap[(curr->posY)+2][(curr->posX)+3]='\\';
 printf("\\");
 gotoxy((curr->posX)+5,(curr->posY)+3);charmap[(curr->posY)+3][(curr->posX)+5]='\\';
 printf("\\");
 gotoxy((curr->posX)+7,(curr->posY)+4);charmap[(curr->posY)+4][(curr->posX)+7]='\\';
 printf("\\");

 if(charmap[(curr->posY)+4][(curr->posX)+8]=='#'){
 temp=(struct Nodeinfo*) malloc (sizeof(struct Nodeinfo));
 temp->lncost=temp->rncost1=temp->rncost2=temp->rncost3=temp->lowcost=temp->uppcost=setnodec;
 temp->lnode=temp->rnode1=temp->rnode2=temp->rnode3=temp->lower=temp->upper=NULL;
 temp->owndis=setndis;
 temp->tabx=temp->taby=settabx;
 temp->checked='n';

 temp->noden=getche();
 temp->posX=wherex()-1;
 temp->posY=wherey();
 charmap[temp->posY][temp->posX]=temp->noden;
 temp->lnode=curr;
 gotoxy((temp->posX)-5,(temp->posY)-2);
  if(curr->rncost1==setnodec){
   curr->rnode1=temp;
   scanf("%d",&curr->rncost1);
   intmap[(temp->posY)-2][(temp->posX)-5]=curr->rncost1;
  }
  else if(curr->rncost2==setnodec){
   curr->rnode2=temp;
   scanf("%d",&curr->rncost2);
   intmap[(temp->posY)-2][(temp->posX)-5]=curr->rncost2;
  }
  else{
   curr->rnode3=temp;
   scanf("%d",&curr->rncost3);
   intmap[(temp->posY)-2][(temp->posX)-5]=curr->rncost3;
  }

   curr=temp;

 crenode=(struct T*) malloc (sizeof(struct T));
 crenode->nn=temp->noden;
 crenode->ownadd=temp;
 crenode->nnadd=NULL;
 c->nnadd=crenode;
 c=crenode;
 }
 else{
  t=charmap[(curr->posY)+4][(curr->posX)+8];

   for(find=s;find->nn!=t;find=find->nnadd);
   temp=find->ownadd;


  gotoxy((temp->posX)-5,(temp->posY)-2);
  if(curr->rncost1==setnodec){
   curr->rnode1=temp;
   scanf("%d",&curr->rncost1);
   intmap[(temp->posY)-2][(temp->posX)-5]=curr->rncost1;
  }
  else if(curr->rncost2==setnodec){
   curr->rnode2=temp;
   scanf("%d",&curr->rncost2);
   intmap[(temp->posY)-2][(temp->posX)-5]=curr->rncost2;
  }
  else{
   curr->rnode3=temp;
   scanf("%d",&curr->rncost3);
   intmap[(temp->posY)-2][(temp->posX)-5]=curr->rncost3;
   }

    curr=temp;
  }

}

void toptobottom(){

  /*gotoxy((curr->posX)-1,(curr->posY)+1);charmap[(curr->posY)+1][(curr->posX)-1]='/';
   printf("/");
   gotoxy((curr->posX)-2,(curr->posY)+2);charmap[(curr->posY)+2][(curr->posX)-2]=25;
   printf("%c",179);
   gotoxy((curr->posX)-2,(curr->posY)+4);charmap[(curr->posY)+4][(curr->posX)-2]=25;
   printf("%c",25);
   gotoxy((curr->posX)-2,(curr->posY)+6);charmap[(curr->posY)+6][(curr->posX)-2]=179;
   printf("%c",179);
   gotoxy((curr->posX)-1,(curr->posY)+7);charmap[(curr->posY)+7][(curr->posX)-1]='\\';
   printf("\\");
  */
   gotoxy((curr->posX)-1,(curr->posY)+1);charmap[(curr->posY)+1][(curr->posX)-1]='/';
   printf("%c",124);
   gotoxy((curr->posX)-1,(curr->posY)+2);charmap[(curr->posY)+2][(curr->posX)-2]=25;
   printf("%c",124);
   gotoxy((curr->posX)-1,(curr->posY)+3);charmap[(curr->posY)+1][(curr->posX)-1]='/';
   printf("%c",124);
   gotoxy((curr->posX)-1,(curr->posY)+4);charmap[(curr->posY)+2][(curr->posX)-2]=25;
   printf("%c",124);
   gotoxy((curr->posX)-1,(curr->posY)+5);charmap[(curr->posY)+4][(curr->posX)-2]=25;
   printf("%c",124);
   gotoxy((curr->posX)-1,(curr->posY)+6);charmap[(curr->posY)+6][(curr->posX)-2]=179;
   printf("%c",124);
   gotoxy((curr->posX)-1,(curr->posY)+7);charmap[(curr->posY)+7][(curr->posX)-1]='\\';
   printf("%c",25);

   if(charmap[curr->posY+8][curr->posX]=='#'){
   temp=(struct Nodeinfo*) malloc (sizeof(struct Nodeinfo));
   temp->lncost=temp->rncost1=temp->rncost2=temp->rncost3=temp->lowcost=temp->uppcost=setnodec;
   temp->lnode=temp->rnode1=temp->rnode2=temp->rnode3=temp->lower=temp->upper=NULL;
   temp->owndis=setndis;
   temp->tabx=temp->taby=settabx;
   temp->checked='n';

   gotoxy(wherex(),wherey()+1);
   temp->noden=getche();
   temp->posX=wherex()-1;
   temp->posY=wherey();
   charmap[temp->posY][temp->posX]=temp->noden;

   gotoxy((temp->posX)-1,(temp->posY)-4);
   scanf("%d",&curr->lowcost);
   intmap[(temp->posY)-4][(temp->posX)-1]=curr->lowcost;

   curr->lower=temp;

   curr=temp;

   crenode=(struct T*) malloc (sizeof(struct T));
   crenode->nn=temp->noden;
   crenode->ownadd=temp;
   crenode->nnadd=NULL;
   c->nnadd=crenode;
   c=crenode;
   }

   else{
   gotoxy((curr->posX)-1,(curr->posY)+4);
   scanf("%d",&curr->lowcost);
   intmap[(curr->posX)+4][(curr->posX)-3]=curr->lowcost;
   t=charmap[curr->posY+8][(curr->posX)];

   /*if((start->rnode1)->noden==t)
    temp=start->rnode1;
   else if((start->rnode2)->noden==t)
    temp=start->rnode2;
   else if((start->rnode3)->noden==t)
    temp=start->rnode3;
   */

    for(find=s;find->nn!=t;find=find->nnadd);
    temp=find->ownadd;

    curr->lower=temp;

    curr=temp;

  }
}

void bottomtotop(){

/*gotoxy((curr->posX)+1,(curr->posY)-7);charmap[(curr->posY)-7][(curr->posX)+1]='\\';
  printf("\\");
  gotoxy((curr->posX)+2,(curr->posY)-6);charmap[(curr->posY)-6][(curr->posX)+2]=179;
  printf("%c",179);
  gotoxy((curr->posX)+2,(curr->posY)-4);charmap[(curr->posY)-4][(curr->posX)+2]=24;
  printf("%c",24);
  gotoxy((curr->posX)+2,(curr->posY)-2);charmap[(curr->posY)-2][(curr->posX)+2]=179;
  printf("%c",179);
  gotoxy((curr->posX)+1,(curr->posY)-1);charmap[(curr->posY)-1][(curr->posX)+1]='/';
  printf("/");
 */

  gotoxy((curr->posX)+1,(curr->posY)-7);charmap[(curr->posY)-7][(curr->posX)+1]='\\';
  printf("%c",24);
  gotoxy((curr->posX)+1,(curr->posY)-6);charmap[(curr->posY)-6][(curr->posX)+2]=179;
  printf("%c",124);
  gotoxy((curr->posX)+1,(curr->posY)-5);charmap[(curr->posY)-7][(curr->posX)+1]='\\';
  printf("%c",124);
  gotoxy((curr->posX)+1,(curr->posY)-4);charmap[(curr->posY)-6][(curr->posX)+2]=179;
  printf("%c",124);
  gotoxy((curr->posX)+1,(curr->posY)-3);charmap[(curr->posY)-4][(curr->posX)+2]=24;
  printf("%c",124);
  gotoxy((curr->posX)+1,(curr->posY)-2);charmap[(curr->posY)-2][(curr->posX)+2]=179;
  printf("%c",124);
  gotoxy((curr->posX)+1,(curr->posY)-1);charmap[(curr->posY)-1][(curr->posX)+1]='/';
  printf("%c",124);

  if(charmap[curr->posY-8][(curr->posX)]=='#'){
   temp=(struct Nodeinfo*) malloc (sizeof(struct Nodeinfo));
   temp->lncost=temp->rncost1=temp->rncost2=temp->rncost3=temp->lowcost=temp->uppcost=setnodec;
   temp->lnode=temp->rnode1=temp->rnode2=temp->rnode3=temp->lower=temp->upper=NULL;
   temp->owndis=setndis;
   temp->tabx=temp->taby=settabx;
   temp->checked='n';

   gotoxy(wherex()-2,wherey()-7);
   temp->noden=getche();
   temp->posX=wherex()-1;
   temp->posY=wherey();
   charmap[temp->posY][temp->posX]=temp->noden;
   gotoxy((temp->posX)+1,(temp->posY)+4);
   scanf("%d",&curr->lowcost);

   temp->upper=curr;

   curr=temp;

   crenode=(struct T*) malloc (sizeof(struct T));
   crenode->nn=temp->noden;
   crenode->ownadd=temp;
   crenode->nnadd=NULL;
   c->nnadd=crenode;
   c=crenode;
   }
   else{
   gotoxy((curr->posX)+1,(curr->posY)-4);
   scanf("%d",&curr->uppcost);
   t=charmap[curr->posY-8][(curr->posX)];

  /* if((start->rnode1)->noden==t)
    temp=start->rnode1;
   else if((start->rnode2)->noden==t)
    temp=start->rnode2;
   else if((start->rnode3)->noden==t)
    temp=start->rnode3;
  */

    for(find=s;find->nn!=t;find=find->nnadd);
    temp=find->ownadd;

    curr->upper=temp;

    curr=temp;
   }
 }

main(){

 int h,w,i,j;

 clrscr();


 for(i=1;i<=25;i++){
  for(j=1;j<=80;j++){
//intmap[i][j]=7;
   charmap[i][j]='#';
  }
 }

 for(i=1;i<=80;i++){gotoxy(i,2);printf("%c",22);}
 instn();

  /*(for(i=1;i<=25;i++){
  for(j=1;j<=80;j++){
   printf("%d",intmap[i][j]);
   printf("%c",charmap[i][j]);
  }
 }   */

 gotoxy(5,13);
 temp=(struct Nodeinfo*) malloc (sizeof(struct Nodeinfo));
 start=temp;
 start->noden=getche();
 charmap[13][5]=start->noden;
 start->posX=5;
 start->posY=13;

 temp->lncost=temp->rncost1=temp->rncost2=temp->rncost3=temp->lowcost=temp->uppcost=setnodec;
 temp->lnode=temp->rnode1=temp->rnode2=temp->rnode3=temp->lower=temp->upper=NULL;
 temp->owndis=setndis;
 temp->checked='n';
 temp->tabx=temp->taby=settabx;
 curr=start;

 crenode=(struct T*) malloc (sizeof(struct T));
 crenode->nn=start->noden;
 crenode->ownadd=start;
 crenode->nnadd=NULL;
 s=crenode;
 c=crenode;

 while(1){
 gotoxy(1,1);printf("CURRENT NODE: %c",curr->noden);

 gotoxy(27,1); printf("INPUT: ");
 scanf("%d",&h);

 switch(h){

 case 1:  straight();
	  break;

 case 2:  upward();
	  break;

 case 3:  downward();
	  break;

  case 4: toptobottom();
	  break;

   case 5:bottomtotop();
	  break;

  case 6: gotoxy(55,1);
	  printf("NODE NAME: ");
	  transfer=getche();
	  for(find=s;find->nn!=transfer;find=find->nnadd);
	  curr=find->ownadd;
	  gotoxy(55,1);
	  printf("            ");
	  break;

  case 0: exit(0);

  case 11: clrscr();
	   for(i=1;i<=25;i++){
	   for(j=1;j<=80;j++){
	    if(charmap[i][j]!='#')
	   //printf(intmap[i][j]=8888;
	   printf("%c",charmap[i][j]);
	    else
	     printf(" ");
	   }
	 }
     break;


 case 7:
 tx=32;
 ty=10;
 textcolor(cc);
 gotoxy(tx,ty);
 //      1                 2               3               4               5               6
 cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,203, 205,205,205,205,205,205,205,203, 205,205,205,205,205,205,205,203, 205,205,205,205,205,205,205,203, 205,205,205,205,205,205,205,203, 205,205,205,205,205,205,205,187);
 gotoxy(tx,ty+1);
 cprintf("%c       %c       %c       %c       %c       %c       %c",186,186,186,186,186,186,186);
 gotoxy(tx,ty+2);
 cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,185);
 gotoxy(tx,ty+3);
 cprintf("%c       %c       %c       %c       %c       %c       %c",186,186,186,186,186,186,186);
 gotoxy(tx,ty+4);
 cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,185);
 gotoxy(tx,ty+5);
 cprintf("%c       %c       %c       %c       %c       %c       %c",186,186,186,186,186,186,186);
 gotoxy(tx,ty+6);
 cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,185);
 gotoxy(tx,ty+7);
 cprintf("%c       %c       %c       %c       %c       %c       %c",186,186,186,186,186,186,186);
 gotoxy(tx,ty+8);
 cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,185);
 gotoxy(tx,ty+9);
 cprintf("%c       %c       %c       %c       %c       %c       %c",186,186,186,186,186,186,186);
 gotoxy(tx,ty+10);
 cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,185);
 gotoxy(tx,ty+11);
 cprintf("%c       %c       %c       %c       %c       %c       %c",186,186,186,186,186,186,186);
 gotoxy(tx,ty+12);
 cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,206, 205,205,205,205,205,205,205,185);
 gotoxy(tx,ty+13);
 cprintf("%c       %c       %c       %c       %c       %c       %c",186,186,186,186,186,186,186);
 gotoxy(tx,ty+14);
 cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,202, 205,205,205,205,205,205,205,202, 205,205,205,205,205,205,205,202, 205,205,205,205,205,205,205,202, 205,205,205,205,205,205,205,202, 205,205,205,205,205,205,205,188);

 /*for(i=3;i<=25;i++){
  gotoxy(31,i);
  printf("%c",221);
 }*/

   for(find=s;find!=NULL;find=find->nnadd){
   search=find->ownadd;
   gotoxy(tx+4+xx,ty+1);textcolor(aa);cprintf("%c",find->nn);search->tabx=wherex()-1;search->taby=wherey();
   gotoxy(tx+3+xx,ty+3);textcolor(bb);cprintf("INF");
   xx+=8;
  }

 tpy=ty+5;

 start->owndis=0;
 gotoxy(tx+4,tpy);
 textcolor(bb);
 cprintf("%d",start->owndis);

 /* for(find=s;find!=NULL;find=find->nnadd)
 ncoun++;
 */

 fx=32;fy=25;
 gotoxy(fx,fy);textcolor(cc);cprintf("= { ");fx+=4;

 while(l){

 i=0;
 smlld=22000;

 /*gotoxy(1,3+lll);
   for(find=s;find!=NULL;find=find->nnadd){
    search=find->ownadd;
    printf("%c",search->checked);
   }
 */

  for(find=s;find!=NULL;find=find->nnadd){
   search=find->ownadd;
   if(search->owndis<smlld && search->checked=='n'){
    smlld=search->owndis;
    smalln=search;
   }
  }
  /*gotoxy(1,3+i);printf("s%ds",smlld);*/

  smalln->checked='y';

  gotoxy(fx,fy);textcolor(dd);cprintf("%c, ",smalln->noden);fx+=3;


  if(smalln->lnode!=NULL){
   LFC=smalln->lncost;
  }
 if(smalln->lower!=NULL){
   LOC=smalln->lowcost;
 }
 if(smalln->upper!=NULL){
   UPC=smalln->uppcost;
 }
 if(smalln->rnode1!=NULL){
   RC1=smalln->rncost1;
 }
 if(smalln->rnode2!=NULL){
   RC2=smalln->rncost2;
 }
 if(smalln->rnode3!=NULL){
   RC3=smalln->rncost3;
 }

 textcolor(bb);
 if(LFC!=-1){
   cal=smalln->lnode;
   if(cal->owndis>(smalln->owndis+smalln->lncost)){
   cal->owndis=smalln->owndis+smalln->lncost;
   gotoxy(cal->tabx-3,tpy);i++;
   cprintf("%d+%d=%d",smalln->owndis,smalln->lncost,(smalln->owndis+smalln->lncost));
  }
}
 if(LOC!=-1){
   cal=smalln->lower;
   if(cal->owndis>(smalln->owndis+smalln->lowcost)){
   cal->owndis=smalln->owndis+smalln->lowcost;
   iarr[in]=cal->noden;
   in++;i++;
   gotoxy(cal->tabx-3,tpy);
   cprintf("%d+%d=%d",smalln->owndis,smalln->lowcost,(smalln->owndis+smalln->lowcost));
  }
}
 if(UPC!=-1){
   cal=smalln->upper;
   if(cal->owndis>(smalln->owndis+smalln->uppcost)){
   cal->owndis=smalln->owndis+smalln->uppcost;
   iarr[in]=cal->noden;
   in++;i++;
   gotoxy(cal->tabx-3,tpy);
   cprintf("%d+%d=%d",smalln->owndis,smalln->uppcost,(smalln->owndis+smalln->uppcost));
  }
}
 if(RC1!=-1){
   cal=smalln->rnode1;
   if(cal->owndis>(smalln->owndis+smalln->rncost1)){
   cal->owndis=smalln->owndis+smalln->rncost1;
   iarr[in]=cal->noden;
   in++;i++;
   gotoxy(cal->tabx-3,tpy);
   cprintf("%d+%d=%d",smalln->owndis,smalln->rncost1,(smalln->owndis+smalln->rncost1));
  }
 }
 if(RC2!=-1){
   cal=smalln->rnode2;
   if(cal->owndis>(smalln->owndis+smalln->rncost2)){
   cal->owndis=smalln->owndis+smalln->rncost2;
   iarr[in]=cal->noden;
   in++;i++;
   gotoxy(cal->tabx-3,tpy);
   cprintf("%d+%d=%d",smalln->owndis,smalln->rncost2,(smalln->owndis+smalln->rncost2));
  }
}
 if(RC3!=-1){
   cal=smalln->rnode3;
   if(cal->owndis>(smalln->owndis+smalln->rncost3)){
   cal->owndis=smalln->owndis+smalln->rncost3;
   iarr[in]=cal->noden;
   in++;i++;
   gotoxy(cal->tabx-3,tpy);
   cprintf("%d+%d=%d",smalln->owndis,smalln->rncost3,(smalln->owndis+smalln->rncost3));
  }
 }
  if(i!=0)
  tpy+=2;

  LFC=LOC=UPC=RC1=RC2=RC3=-1;

 for(find=s;find!=NULL;find=find->nnadd){
   search=find->ownadd;
   l=0;
   if(search->checked=='n'){
   l=1;
   break;
  }
 }

 /* for(ct=0;ct<tarrc;ct++){
   if(ct==smalln->owndis)
    break;
  }
  ct=pop;
  for(ct=pop;ct<tarrc;ct++){
   tarr[ct]=tarr[ct+1];
  }
  tarrc-=1;


  gotoxy(1,20+lll);
  for(ct=0;ct<tarrc;ct++)
  printf("%d",tarr[ct]);
*/


 }//while


   /*for(find=s;find->nn!='D';find=find->nnadd);
     curr=find->ownadd;

    gotoxy(1,19);
    printf("%u %d %c %d %d %u %d %u %d %u %d %u %d %u %d\n",curr->lnode,curr->lncost,curr->noden,curr->posX,curr->posY,curr->lower,curr->lowcost,curr->upper,curr->uppcost,curr->rnode1,curr->rncost1,curr->rnode2,curr->rncost2,curr->rnode3,curr->rncost3);
   */

   gotoxy(fx-2,fy);textcolor(cc);cprintf(" }");
   /*printf("%d",curr->rncost1);*/
 }
}
 getch();
}
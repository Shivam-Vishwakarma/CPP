/*-----------------------------------------------------------
Created by:
SHIVAM VISHWAKARMA         0225CS181049
+91 9589212176             cs1805@gloabal.org.in
Date : 27.04.2020
-------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
void main(){

char ch;
int sp_char=0;
FILE *fp;
clrscr();
fp=fopen("c:\\abc.txt","r");
if(fp==NULL)
	{
	printf("File not Found!!!\nPress any key to exit");
	getch();
	exit(1);
	}
while(!feof(fp)){
 ch = getc(fp);
 printf("%c",ch);
 if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)
 ||ch==32||(ch>=48&&ch<=57)||ch=='\n'||ch==EOF)
	continue;
 else
	sp_char++;
}
printf("\n\nTotal special characters : %d",sp_char);
getch();
}

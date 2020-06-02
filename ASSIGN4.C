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
int word_count=0;
FILE *fp;
fp=fopen("c:\\abc.txt","r");
if(fp==NULL)
	{
	printf("File not Found!!!\nPress any key to exit");
	getch();
	exit(1);
	}
while(!feof(fp)){
 ch = getc(fp);
 if(ch==" ")
	word_count++;
}
printf("Total words : %d",word_count);
getch();
}


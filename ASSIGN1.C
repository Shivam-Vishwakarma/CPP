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
FILE *fp1,*fp2;
clrscr();
fp1=fopen("c:\\abc.txt","r");
if(fp1==NULL)
	{
	printf("File not Found!!!\nPress any key to exit");
	getch();
	exit(1);
	}

fp2=fopen("c:\\def.txt","w");
if(fp2==NULL)
	{
	printf("File cannot be created!!!\nPress any key to exit");
	getch();
	exit(1);
	}
while(!feof(fp1)){
ch=getc(fp1);
putc(ch,fp2);
}


printf("Content of abc.txt file: \n");
while(!feof(fp1)){
ch=getc(fp1);
printf("%c",ch);
}


fclose(fp1);
fclose(fp2);


fp2=fopen("c:\\def.txt","r");
printf("Content of def.txt file: \n");
while(!feof(fp2)){
ch=getc(fp2);
printf("%c",ch);
}

fclose(fp2);
getch();
}
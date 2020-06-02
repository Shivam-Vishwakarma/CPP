#include<stdio.h>
#include<conio.h>
void main()
{
long dec,temp, i,j=0;
char hex[20];
clrscr();
printf("\n enter a dec num : ")  ;
scanf("%ld",&dec);
temp=dec;
while(dec)
{
i=dec%16;
dec/=16;
switch(i)
{	case 0: hex[j]='0';break;
	case 1: hex[j]='1';break;
	case 2: hex[j]='2';break;
	case 3: hex[j]='3';break;
	case 4: hex[j]='4';break;
	case 5: hex[j]='5';break;
	case 6: hex[j]='6';break;
	case 7: hex[j]='7';break;
	case 8: hex[j]='8';break;
	case 9: hex[j]='9';break;
	case 10: hex[j]='A';break;
	case 11: hex[j]='B';break;
	case 12: hex[j]='C';break;
	case 13: hex[j]='D';break;
	case 14: hex[j]='E';break;
	case 15: hex[j]='F';
}                       j++;

}

printf("\n hex equivalent of %ld = ",temp);
for(i=16;i>=0;i--)
printf("%c",hex[i]);
getch();
}
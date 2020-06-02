#include<stdio.h>
#include<conio.h>
void main()
{  char ch;
clrscr();
printf("\n enter a char : ");
scanf("%c",&ch);
if ((ch>96&&ch<123)||(ch>64&&ch<91))
{  if(ch==97||ch==101||ch==105||ch==111||ch==117||ch==65||ch==69||ch==73||ch==79||ch==85)
   printf("\n ITS A VOWEL");
   else
   printf("\n ITS A CONSONENT ");
}
else
printf("\n ITS NOT AN ALPHABET ");
getch();
}
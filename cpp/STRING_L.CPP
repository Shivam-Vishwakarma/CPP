#include <stdio.h>
#include<conio.h>
main()
{  clrscr();
   char string[200];
   int c=0;
   printf("Input a string:");
   gets(string);
   printf("\nThe string input was:");
   puts(string);
   while(string[c]!='\0')
   c++;
   printf("\nThe length of string is : %d ",c);
   getch();
}

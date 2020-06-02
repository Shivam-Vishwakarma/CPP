#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*
SHIVAM VISHWAKARMA
0225CS181049
CS1805@GLOBAL.ORG.IN
+91 95892 12176

*/
  int main()
    {
    char ch;

    FILE *source, *target;
	  clrscr();

    source = fopen("C:\\abc.txt", "r");

	  if( source == NULL )
	  {
		printf("File Not Found \n Press any key to exit...\n");
		getch();
		exit(1);
	  }
    target = fopen("C:\\def.txt", "w");

    if( target == NULL )
    {
	  fclose(source);
	  printf("File cannot be created/found\nPress any key to exit...\n");
	  getch();
	  exit(1);
    }

    while( ( ch = fgetc(source) ) != EOF )
	  fputc(ch, target);

	  printf("File copied successfully.\n");
	  fclose(source);
	  fclose(target);

	  getch();
	  return 0;
}
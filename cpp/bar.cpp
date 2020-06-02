

#include <graphics.h>
#include <conio.h>
 
main()
{
   int gd = DETECT, gm;
 
   initgraph(&gd, &gm, "D:\\TC\\BGI");
 
   arc(100, 100, 0, 135, 50);
 
   getch();
   closegraph();
   return 0;
}
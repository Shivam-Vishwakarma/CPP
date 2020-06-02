#include <graphics.h>
#include<conio.h>

// driver code
int main()
{
    // gm is Graphics mode which is
    // a computer display mode that
    // generates image using pixels.
    // DETECT is a macro defined in
    // "graphics.h" header file
    int gd = DETECT, gm;

    // initgraph initializes the
    // graphics system by loading
    // a graphics driver from disk
    initgraph(&gd, &gm, "c:\\tc\\bgi");

    // center and radius of circle
   int x_circle = 250;
    int y_circle = 250;
    int radius=100;

    // setting border color
    int border_color = WHITE;


    // set color and pattern
    setfillstyle(1,15);

    // x and y is a position and
    // radius is for radius of circle
    circle(x_circle,y_circle,radius);

    // fill the color at location
    // (x, y) with in border color
    floodfill(x_circle,y_circle,border_color);

    getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system
    closegraph();

    return 0;
}
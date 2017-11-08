// C-program for circle drawing
// using Bresenham’s Algorithm
// in computer-graphics
#include <iostream>
// #include <dos.h>
#include <graphics.h>
 using namespace std;
// Function to put pixels
// at subsequence points
void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, RED);
    putpixel(xc-x, yc+y, RED);
    putpixel(xc+x, yc-y, RED);
    putpixel(xc-x, yc-y, RED);
    putpixel(xc+y, yc+x, RED);
    putpixel(xc-y, yc+x, RED);
    putpixel(xc+y, yc-x, RED);
    putpixel(xc-y, yc-x, RED);
}
 
// Function for circle-generation
// using Bresenham's algorithm
void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    while (y >= x)
    {
        // for each pixel we will
        // draw all eight pixels
        drawCircle(xc, yc, x, y);
        x++;
 
        // check for decision parameter
        // and correspondingly 
        // update d, x, y
        if (d > 0)
        {
            y--; 
            d = d + 4 * (x - y) + 6;
        }
        else
            d = d + 4 * x + 10;
        drawCircle(xc, yc, x, y);
        // delay(3000);
    }
}
 
 
// driver function
int main()
{
    int xc = 50, yc = 50, r = 30;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);  // initialize graph
    circleBres(xc, yc, r);    // function call
    delay(10000);
    closegraph();
    return 0;
}
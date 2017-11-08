#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
	int x, y, x1, y1, x2, y2;
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, NULL);
	cout<<"enter the values of line coordinates:";
	cin>>x1>>y1>>x2>>y2;
	cout<<"enter the translation coordinates:";
	cin>>x>>y;
	// cleardevice();
	line(x1,y1,x2,y2);
	setcolor(RED);
	cout<<"now hit a key to see translation:";
	line(x1+x,y1+y,x2+x,y2+y);
	// getch();
	delay(10000);
	closegraph();
	return 0;
}

#include <stdio.h>

void heartDraw()
{

	int gd = DETECT, gm;
	clrscr();
		initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	rectangle(150, 50, 450, 350);
	ellipse(250, 150, 0, 190, 50, 70);
	ellipse(350, 150, -10, 180, 50, 70);
	line(200, 160, 300, 310);
	line(400, 160, 300, 310);

	setfillstyle(10, 4);
	
	floodfill(155, 200, WHITE);
	setfillstyle(1, 4);
    floodfill(300, 200, WHITE);

	closegraph();
	closegraph();
}

int main()
{
	
	heartDraw();
	return 0;
}


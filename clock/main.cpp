#include"Clock.h"
#include"main.h"

const int winWidth = 600, winHeight = 600;
Clock c;

void timerEvent(int id)
{
	if (id == 0)
	{
		c.addOneSec();
		c.drawEllipseClock(10, 10, winWidth - 20, winHeight - 20);
	}
}

int Setup()
{	
	initWindow("CLOCK",DEFAULT,DEFAULT,winWidth,winHeight);
	

	registerTimerEvent(timerEvent);
	startTimer(0,1000);
	return 0;
}
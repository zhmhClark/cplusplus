#include "Clock.h"

Clock::Clock()
{
}

Clock::Clock(int hour, int min, int sec)
{
}

Clock::Clock(Clock & cl)
{
}


Clock::~Clock()
{
}

void Clock::setTime(int hour, int min, int sec)
{
	this->hour = hour;
	this->min  = min;
	this->sec  = sec;
}


void Clock::
addOneSec()
{
	sec++;
	if (sec == 60)
	{
		min++;	sec = 0;
		if (min == 60)
		{
			hour++;	min = 0;
			if (hour = 12)
			{	hour = 0;	}
		}
	}
}

void Clock::drawEllipseClock(int x, int y, int width, int height)
{
	int ox = (x + width ) / 2;
	int oy = (y + height) / 2;
	int Min = width < height ? width : height;
	int hl = Min / 4 - Min / 7;
	int ml = Min / 3 - Min / 6;
	int sl = Min / 2 - Min / 5;
	int i;
			
	beginPaint();
	clearDevice();

	//circle
	setPenWidth(2);
	setPenColor(BLACK);
	setBrushColor(WHITE);
	ellipse(x, y, width, height);
	
	//label
	setPenWidth(1);
	setPenColor(BLACK);
	int len1 = min / 2 - min / 8, len2 = len1 + 10;
	for (i = 0; i < 12; i++)
	{
		moveTo(ox + len1 * sin(RAD(180 - i * 30)), oy + len1 * cos(RAD(180 - i * 30)));
		lineTo(ox + len2 * sin(RAD(180 - i * 30)), oy + len2 * cos(RAD(180 - i * 30)));
	}

	//hour
	setPenWidth(8);
	setPenColor(BLACK);
	moveTo(ox, oy);
	lineTo(ox + hl * sin(RAD(180 - i * 30)), hl + len2 * cos(RAD(180 - i * 30)));
	
	//minute
	setPenWidth(4);
	setPenColor(BLACK);
	moveTo(ox, oy);
	lineTo(ox + ml * sin(RAD(180 - i * 30)), ml + len2 * cos(RAD(180 - i * 30)));

	//second
	setPenWidth(2);
	setPenColor(RED);
	moveTo(ox, oy);
	lineTo(ox + sl * sin(RAD(180 - i * 30)), sl + len2 * cos(RAD(180 - i * 30)));

}

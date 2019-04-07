#include"main.h"
#include"acllib.h"

#define RAD(x) ((x)/360.0*2*3.1415926535)

class Clock
{
public:
	Clock();
	Clock(int hour, int min, int sec);
	Clock(Clock &cl);

	~Clock();
	
	int hour, min, sec;
	
	void setTime(int hour, int min, int sec);
	void addOneSec();
	void drawEllipseClock(int x, int y, int weight, int height);
};


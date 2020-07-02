
#include "Balvan.h"

class Zabica {
	int x;
	int y;
	int zivoti;
	int tajmer;
public:
	Zabica() {
		x = 20;
		y = 15;
		zivoti = 5;
		tajmer = 50000;
	}
	int getzivoti();
	int gettajmer();
	int getx();
	int gety();
	void plusx();
	void plusy();
	void minusx();
	void minusy();

};

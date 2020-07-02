#include "Zabica.h"

int Zabica::getzivoti() {
	return zivoti;
}
int Zabica::gettajmer() {
	return tajmer;
}

int Zabica::getx()
{
	return x;
}

int Zabica::gety()
{
	return y;
}

void Zabica::plusx()
{
	if(x != 39)
		x = x + 4;
}

void Zabica::plusy()
{
	if (y != 16)
		y = y + 2;
}

void Zabica::minusx()
{
	if (x != 0)
		x = x - 4;
}

void Zabica::minusy()
{
	if (y != 0)
		y = y - 2;
}

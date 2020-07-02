#include <string>
#include "Autic.h"


Autic::Autic(int a)
{
	if (a == 0)
	{
		avto = "|  [])";
		prostor = 6;
	}
	if (a == 1)
	{
		avto = "|    []|";
		prostor = 8;
	}
	if (a == 2)
	{
		avto = "([]  |";
		prostor = 6;
	}
	if (a == 3)
	{
		avto = "|[]    |";
		prostor = 8;
	}
}

int Autic::getprostor()
{
	return prostor;
}

char Autic::getavto(int a)
{
	return avto[a];
}

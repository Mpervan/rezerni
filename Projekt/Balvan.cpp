#include <string>
#include "Balvan.h"

Balvan::Balvan() {
	drvo = "[             ]";
	prostor = 14;
}

int Balvan::getprostor()
{
	return prostor;
}

char Balvan::getbalvan(int a)
{
	return drvo[a];
}
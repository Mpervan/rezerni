#include <string>
#include "Kornjaca.h"

Kornjaca::Kornjaca()
{
	kornjace = "( )°( )°( )°";
	prostor = 12;
}

void Kornjaca::zaroni()
{
	kornjace = "            ";
	prostor = 0;
}

void Kornjaca::izroni()
{
	kornjace = "( )°( )°( )°";
	prostor = 12;
}

int Kornjaca::getprostor()
{
	return prostor;
}

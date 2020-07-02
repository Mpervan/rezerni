#include <iostream>
#include <vector>
#include "Matrica.h"

Matrica::Matrica()
{
	for (int i = 0; i < 16; ++i)
	{
		std::vector<char> v;
		for (int j = 0; j < 40; ++j)
		{
			if (i % 2 == 0 && i != 0 && i != 14 && j != 39)
			{
				v.push_back('.');
			}
			else//if (i % 2 != 0 && i != 0 && j != 29 && i != 19)
			{
				v.push_back(' ');
			}
		}
		matrix.push_back(v);
	}
	for (int i = 0; i < 16; ++i)
	{
		std::vector<bool> p;
		for (int j = 0; j < 40; ++j)
		{
			if (i == 3 || i == 5)
			{
				p.push_back(false);
			}
			else
			{
				p.push_back(true);
			}
		}
		pogibelj.push_back(p);
	}
}

void Matrica::printaj()
{
	std::vector <std::vector<char>>::iterator i;
	std::vector<char>::iterator j;
	for (i = matrix.begin(); i != matrix.end(); ++i)
	{
		for (j = (*i).begin(); j != (*i).end(); ++j)
		{
			std::cout << *j;
		}
		std::cout << std::endl;
	}
}

void Matrica::draw_char(int x, int y, char c)
{
	matrix[y][x] = c;
}

void Matrica::clear()
{
	for (int i = 0; i < 16; ++i)
	{
		for (int j = 0; j < 40; ++j)
		{
			if (i % 2 == 0 && i != 0 && i != 14 && j != 39)
			{
				matrix[i][j] = '.';
			}
			else
			{
				matrix[i][j] = ' ';
			}
		}
	}
}

void Matrica::setsmrt(int x, int y)
{
	pogibelj[y][x] = false;
}

void Matrica::setzivot(int x, int y)
{
	pogibelj[y][x] = true;
}
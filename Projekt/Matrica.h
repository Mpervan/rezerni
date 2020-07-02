#include <iostream>
#include <vector>
#include "Zabica.h"

class Matrica {
	std::vector<std::vector<char>> matrix;
	std::vector<std::vector<bool>> pogibelj;
public:
	Matrica();
	void printaj();
	void draw_char(int x, int y, char c);
	void clear();
	void setsmrt(int x, int y);
	void setzivot(int x, int y);
};
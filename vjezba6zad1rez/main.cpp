#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>
#include "library.hpp"

using namespace std;

int main()
{
    ifstream fin("knjige2.txt");
    Library lib;
    lib.stavi(fin);
    lib.printaj();
}

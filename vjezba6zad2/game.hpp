#include <iostream>
#include <vector>
#include "igrackomp.hpp"

using namespace std;

class Game
{
    int br;
    vector<Player*> igraci;
    vector<int> kune;
public:
    void setbr(int brr);
    void setkune();
    void podjeli();
    void printaj();
};

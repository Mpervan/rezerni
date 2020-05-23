#include <iostream>
#include <vector>
#include "igrac.hpp"

using namespace std;

class HumanPlayer : public Player{
public:
    void setnum(int br);
    int getnum();
    void setdesna(int kuna);
    int zbrojdesna();
    void setlijeva(int kuna);
    int zbrojlijeva();
};


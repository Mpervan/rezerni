#include <iostream>
#include <vector>
#include "igracljud.hpp"

using namespace std;

class ComputerPlayer : public Player{
public:
    void setnum(int br);
    int getnum();
    void setdesna(int kuna);
    int zbrojdesna();
    void setlijeva(int kuna);
    int zbrojlijeva();
};

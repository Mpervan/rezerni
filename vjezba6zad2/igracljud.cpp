#include <iostream>
#include <vector>
#include "igracljud.hpp"

using namespace std;

void HumanPlayer::setnum(int br)
{
    num = br;
}

int HumanPlayer::getnum()
{
    return num;
}

void HumanPlayer::setdesna(int kuna)
{
    desna.push_back(kuna);
}

int HumanPlayer::zbrojdesna()
{
    vector<int>::iterator it;
    int br = 0;
    for(it = desna.begin(); it != desna.end(); ++it)
    {
        br = br + *it;
    }

}

void HumanPlayer::setlijeva(int kuna)
{
    lijeva.push_back(kuna);
}

int HumanPlayer::zbrojlijeva()
{
    vector<int>::iterator it;
    int br = 0;
    for(it = lijeva.begin(); it != lijeva.end(); ++it)
    {
        br = br + *it;
    }

}

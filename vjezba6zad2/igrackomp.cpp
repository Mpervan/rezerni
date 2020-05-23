#include <iostream>
#include <vector>
#include "igrackomp.hpp"

using namespace std;

void ComputerPlayer::setnum(int br)
{
    num = br;
}

int ComputerPlayer::getnum()
{
    return num;
}

void ComputerPlayer::setdesna(int kuna)
{
    desna.push_back(kuna);
}

int ComputerPlayer::zbrojdesna()
{
    vector<int>::iterator it;
    int br = 0;
    for(it = desna.begin(); it != desna.end(); ++it)
    {
        br = br + *it;
    }

}

void ComputerPlayer::setlijeva(int kuna)
{
    lijeva.push_back(kuna);
}

int ComputerPlayer::zbrojlijeva()
{
    vector<int>::iterator it;
    int br = 0;
    for(it = lijeva.begin(); it != lijeva.end(); ++it)
    {
        br = br + *it;
    }

}


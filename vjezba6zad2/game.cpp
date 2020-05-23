#include <iostream>
#include <vector>
#include "game.hpp"

using namespace std;

void Game::setbr(int brr)
{
    br = brr;
}

void Game::setkune()
{
    int i = 0;
    while(i < br)
    {
        kune.push_back(1);
        kune.push_back(2);
        kune.push_back(5);
        i++;
    }
}

void Game::podjeli()
{

}

#include <iostream>
#include <string>
#include <vector>
#include "Library.hpp"

using namespace std;

void Library::stavi(Book* knj)
{
    knjiznica.push_back(knj);
}

vector<string> Library::svinaslovi(string c)
{
    vector<string> naslovi;
    vector<Book*>::iterator it;
    for(it = knjiznica.begin(); it != knjiznica.end(); ++it)
    {
        Book* knjig = *it;
        string tmp;
        tmp.assign((*knjig).getautor());
        if(tmp.find(c) != string::npos)
        {
            naslovi.push_back((*knjig).getnaslov());
        }
    }
    return naslovi;
}

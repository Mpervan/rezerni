#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include "Library.hpp"

using namespace std;

void Library::stavi(ifstream& input)
{
    string line;
    while(getline(input, line))
    {
        istringstream strim(line);
        if(line.find("pdf") == string::npos)
        {
            HardCopyBook knj;
            string temp;
            getline(strim, temp, ';');
            knj.setautor(temp);
            getline(strim, temp, ';');
            knj.setnaslov(temp);
            getline(strim, temp, ';');
            int brr = rand() % 100 + 1920;
            knj.setgodina(brr);
            stringstream ss(temp);
            ss >> brr;
            knj.setbrstr(brr);
            Book *rezerva = &knj;
            knjiznica.push_back(rezerva);
        }
        if(line.find("pdf") != string::npos)
        {
            EBook knj;
            string temp;
            int brr = rand() % 100 + 1920;
            knj.setgodina(brr);
            getline(strim, temp, ';');
            knj.setautor(temp);
            getline(strim, temp, ';');
            knj.setnaslov(temp);
            getline(strim, temp, ';');
            knj.setdat(temp);
            getline(strim, temp, ';');
            stringstream ss(temp);
            int brr2 = 0;
            ss >> brr2;
            knj.setmb(brr2);
            Book *rezerva = &knj;
            knjiznica.push_back(rezerva);
        }
    }
}

void Library::printaj()
{
    vector<Book*>::iterator it;
    for(it = knjiznica.begin(); it != knjiznica.end(); ++it)
    {
        Book* knj = *it;
        knj->printaj();
    }
}

vector<string> Library::svinaslovi(string c)
{
    vector<string> naslovi;
    vector<Book*>::iterator it;
    for(it = knjiznica.begin(); it != knjiznica.end(); ++it)
    {
        Book* knjig = *it;
        string tmp;
        tmp.assign(knjig->getautor());
        if(tmp.find(c) != string::npos)
        {
            naslovi.push_back(knjig->getautor());
        }
    }
    return naslovi;
}



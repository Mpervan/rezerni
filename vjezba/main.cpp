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
    vector<string> v;
    string line;
    int broj = 0;

    // citanje i spremanje u vektor
    while(getline(fin, line))
    {
        v.push_back(line);
        broj++;
    }


    // ispis vektora - test
    vector<string>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << endl;

    HardCopyBook hc[broj];
    EBook eb[broj];
    int num1 = 0;
    int num2 = 0;
    string tmp;
    string priv;
    vector<string>::iterator itr;
    string::iterator j;
    for (itr = v.begin(); itr != v.end(); ++itr)
    {
        tmp.assign(*itr);
        j = tmp.begin();
        while(*j != ';')
        {
            priv.push_back(*j);
            ++j;
        }
        if(tmp.find("pdf") == string::npos)
        {
            hc[num1].setautor(priv);
            priv.clear();
        }
        if(tmp.find("pdf") != string::npos)
        {
            eb[num2].setautor(priv);
            priv.clear();
        }
        ++j;
        while(*j != ';')
        {
            priv.push_back(*j);
            ++j;
        }
        if(tmp.find("pdf") == string::npos)
        {
            hc[num1].setnaslov(priv);
            priv.clear();
        }
        if(tmp.find("pdf") != string::npos)
        {
            eb[num2].setnaslov(priv);
            priv.clear();
        }
        ++j;
        while(*j != ';' && j != tmp.end())
        {
            priv.push_back(*j);
            ++j;
        }
        if(tmp.find("pdf") == string::npos)
        {
            stringstream ss(priv);
            int rez = 0;
            ss >> rez;
            hc[num1].setbrstr(rez);
            priv.clear();
            num1++;
        }
        if(tmp.find("pdf") != string::npos)
        {
            eb[num2].setdat(priv);
            priv.clear();
            ++j;
            while(j != tmp.end())
            {
                priv.push_back(*j);
                ++j;
            }
            stringstream ss(priv);
            float rez = 0;
            ss >> rez;
            eb[num2].setmb(rez);
            priv.clear();
            num2++;
        }
        tmp.clear();
    }

    Library lib;
    int i1 = 0;
    int i2 = 0;
    Book* knjiga;
    while(i1 < num1)
    {
        knjiga = &hc[i1];
        lib.stavi(knjiga);
        i1++;
    }
    while(i2 < num2)
    {
        knjiga = &eb[i2];
        lib.stavi(knjiga);
        i2++;
    }
    vector<string> rezerni = lib.svinaslovi("Aldous Huxley");
    vector<string>::iterator n_it;
    for(n_it = rezerni.begin(); n_it != rezerni.end(); ++n_it)
    {
        cout << "Svi naslovi autora:" << *n_it << endl;
    }
}

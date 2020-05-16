#include <string>
#include <vector>
#include "ebook.hpp"

class Library{
    vector<Book*> knjiznica;
public:
    void stavi(ifstream &input);
    void printaj();
    vector<string> svinaslovi(string c);
};

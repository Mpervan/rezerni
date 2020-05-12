#include <string>
#include <vector>
#include "ebook.hpp"

class Library{
    vector<Book*> knjiznica;
public:
    void stavi(Book* knj);
    vector<string> svinaslovi(string c);
};

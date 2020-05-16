#include <iostream>
#include <string>

using namespace std;

class Book{
protected:
    string autor;
    string naslov;
    int godina;
public:
    virtual ~Book(){};
    virtual string getautor(){};
    virtual string getnaslov(){};
    virtual int getgodina(){};
    virtual void setautor(string c){};
    virtual void setnaslov(string c){};
    virtual void setgodina(int br){};
    virtual void printaj(){};
};

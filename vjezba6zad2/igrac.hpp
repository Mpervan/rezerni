#include <iostream>
#include <vector>

using namespace std;

class Player{
protected:
    int num;
    vector<int> desna;
    vector<int> lijeva;
public:
    virtual void setnum(int br){}
    virtual int getnum(){}
    virtual void setdesna(int kuna){}
    virtual int zbrojdesna(){}
    virtual void setlijeva(int kuna){}
    virtual int zbrojlijeva(){}
};

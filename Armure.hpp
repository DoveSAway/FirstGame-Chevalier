#ifndef Armure_hpp
#define Armure_hpp

#include <stdio.h>

#endif /* Armure_hpp */

using namespace std;

class Armure : public Items{
private:
    int ar_defence;
public:
    Armure (string nom, int LVL, int Price, int Defence) : Items(nom, LVL, Price), ar_defence(Defence){}
    int getDef() const { return ar_defence;}
    void equiper() override{
    }
};

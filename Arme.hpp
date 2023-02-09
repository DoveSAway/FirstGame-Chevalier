#ifndef Arme_hpp
#define Arme_hpp

#include <stdio.h>

#endif /* Arme_hpp */

using namespace std;

class Arme : public Items{
private:
    int a_force;
public:
    Arme(string nom, int LVL, int Price, int Force) : Items(nom, LVL, Price), a_force(Force) {}
    int getForce() const { return a_force;}
    void equiper() override{
        }
};

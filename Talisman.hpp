#ifndef Talisman_hpp
#define Talisman_hpp

#include <stdio.h>

#endif /* Talisman_hpp */

using namespace std;

class Talisman : public Items{
private:
    int t_heal;
public:
    Talisman (string nom, int LVL, int Price, int Heal) : Items(nom, LVL, Price), t_heal(Heal){}
    int getHeal() const { return t_heal;}
    void equiper() override{
        
    }
};

#ifndef Items_hpp
#define Items_hpp

#include <stdio.h>

#endif /* Items_hpp */

using namespace std;

class Items {
private:
    int i_level;
    int i_price;
    string i_nom;
public:
    Items (string nom, int LVL, int Price) : i_nom(nom), i_level(LVL), i_price(Price) {}
    
    string getNom() const { return i_nom;}
    int getLevel() const { return i_level;}
    int getPrice() const { return i_price;}
    
    virtual void equiper() = 0;
};

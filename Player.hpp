#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

#endif /* Player_hpp */

using namespace std;

class Player{
private:
    int p_lifePoint;
    int p_power;
    int p_def;
    int p_or;
    int p_level;
    string p_nom;
public:
    Player (string nom, int LVL, int LP, int PWR, int DF, int PO)
    : p_nom(nom), p_level(LVL), p_lifePoint(LP), p_power(PWR), p_def(DF), p_or(PO){}
    
    string getNom() const { return p_nom;}
    int getLevel() const { return p_level;}
    int getGold() const { return p_or;}
    int getForce() const { return p_power;}
    int getDef() const { return p_def;}
    int getLP() const { return p_lifePoint;}
    
    vector<Items*>inventaire;
    vector<Items*>stuff;
    
    void addInStuff(Items* item){
        stuff.push_back(item);
    }
    
    void addInInventory(Items* item){
        inventaire.push_back(item);
    }
    
    int setStuff(int A, int B){
        int statPlus = 0;
        statPlus = A + B;
        return statPlus;
    }
    
    void showStats() {
            cout << "Votre Nom : " << p_nom << endl;
            cout << "Force : " << p_power << endl;
            cout << "Défense : " << p_def << endl;
            cout << "Points de Vie : " << p_lifePoint << endl;
            cout << "Level : " << p_level << endl;
            cout << "Argent : " << p_or << endl;
        }
    void showStuffing() {
            cout << "Votre Nom : " << p_nom << endl;
            cout << "Force : " <<  << endl;
            cout << "Défense : " << p_def << endl;
            cout << "Points de Vie : " << p_lifePoint << endl;
            cout << "Level : " << p_level << endl;
            cout << "Argent : " << p_or << endl;
        }
    
    void addVerif(int PRICE,Items* item,string nomItem){
        if (getGold() >= PRICE){
            addInInventory(item);
            cout << "Vous venez d'ajouter : " << nomItem << " à votre Inventaire."<< endl;
        }else{
            cout << "Il vous est impossible d'acheter '" << nomItem << "' car vous ne possédez pas asser d'argent.\n" << endl;
        }
    }
    
    void setStuff(int LVL,Items* item,string nomItem){
        if (getLevel() >= LVL){
            addInStuff(item);
            cout << "Vous venez d'équiper : " << nomItem << "."<< endl;
        }else{
            cout << "Il vous malheureusement impossible d'équiper '" << nomItem << "' car il n'est pas de vôtre niveau." << endl;
        }
    }
};

#ifndef World_hpp
#define World_hpp

#include <stdio.h>
#include <string>

#endif /* World_hpp */

using namespace std;

class World{
private:
    
public:
    World (string nom){
    }
    
    void choixBoutique(){
        cout << "Voici ce que vous propose le marchant :\n" << endl;
        cout << "-Epée de la mort : force + 10, niveau 10, Prix 1000\n-Epée de base : force + 2, niveau 2, Prix 200\n-Armure de la mort : défense + 10, niveau 4, Prix 1000\n-Armure de péon : défense + 1, niveau 1, Prix 100\n-Talisman de la mort : soins + 10, niveau 3, Prix 1000\n-Talisman de la régénération totale : soins + 50, niveau 5, Prix 2000\n" << endl;
        cout << "Vous choisissez d'acheter une Epée de la mort, ainsi Qu'une armure de Peon et l'Anneau de Doran. Ce qui vous fait un total de :\n" << endl;
    }
};

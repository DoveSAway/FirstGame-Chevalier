#include <iostream>
#include <vector>
#include <string>
#include "World.hpp"
#include "Items.hpp"
#include "Player.hpp"
#include "Arme.hpp"
#include "Armure.hpp"
#include "Talisman.hpp"

using namespace std;

    int main() {
        
        World world ("FantasyWorld");
        Player player ("Jean-Cule deMontarzack",5 ,10 ,10 ,10 ,2500);
        Arme EpeeDeLaMort ("Epée de la mort",10 ,1000 ,10);
        Arme EpeeDeBase ("Epée de Base",2 ,200 ,2);
        Armure ArmureDeLaMort ("Armure de la mort",4 ,1000 ,10);
        Armure ArmureDePeon ("Armure de Peon",1 ,100 ,1);
        Talisman AnneauDeDoran ("Anneau De Doran", 5, 1000, 10);
        Talisman TalismanDivin("Talisman Divin",5, 2000, 50);
        
        cout << " ----- START GAME -----" << endl;
        cout << "Vous êtes un aventurier qui vien seulement d'arriver dans un Nouveau Monde.\n\nVoici vos statistiques :"<< endl;
        player.showStats();
        cout << "\nVous ne possédez rien sur vous en terme d'équipement, c'est alors qu'un marchant s'approche et vous propose ses biens à vendre.\n" << endl;
        world.choixBoutique();
        cout << EpeeDeLaMort.getPrice() + ArmureDePeon.getPrice() + AnneauDeDoran.getPrice() << " Pièces d'Or\n" << endl;
        
        player.addVerif(1000, &EpeeDeLaMort,EpeeDeLaMort.getNom());
        player.addVerif(100, &ArmureDePeon,ArmureDePeon.getNom());
        player.addVerif(1000, &AnneauDeDoran,AnneauDeDoran.getNom());
        
        cout << "\nVous placez vos nouveaux objets dans votre inventaire.\n" << endl;
        cout << "Loins de vous l'idée de vous trimbaler ainsi, vous décidez donc de tanter de vous équiper de vos récents achats :\n" << endl;
                
        player.setStuff(10, &EpeeDeLaMort, EpeeDeLaMort.getNom());
        player.setStuff(player.getForce(), EpeeDeLaMort.getForce());
        
        player.setStuff(1, &ArmureDePeon, ArmureDePeon.getNom());
        player.setStuff(player.getDef(), ArmureDePeon.getDef());
        
        player.setStuff(5, &AnneauDeDoran, AnneauDeDoran.getNom());
        player.setStuff(player.getLP(), AnneauDeDoran.getHeal());
        
        return 0;
    }

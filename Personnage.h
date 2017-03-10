#ifndef DEF_PERSONNAGE_H
#define DEF_PERSONNAGE_H

using namespace std ;
#include <string> ;

class Personnage
{
  private :
  int vie ;
  int mana ;
  string arme ;
  int degat_arme ;

  public :
  Personnage() ;
  void afficher() ;
  void attaque(Personnage &cible) ;
  void recevoir_degat(int degat) ;
  void boire_potion(int chance) ;
  bool en_vie() ;
} ;

#endif

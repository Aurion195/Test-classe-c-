#include "Personnage.h"
#include <iostream>
#include <string>


using namespace std ;

Personnage::Personnage()
{
  vie=50 ;
  mana=100 ;
  arme="Epée trancheuse de tête" ;
  degat_arme=10 ;
}

void Personnage::afficher()
{
  cout << "Vie = " << vie << endl ;
  cout << "Mana = " << mana << endl ;
  cout << "Arme = " << arme << endl ;
  cout << "Dégat arme = " << degat_arme << endl ;
}

void Personnage::attaque(Personnage& cible)
{
  cible.recevoir_degat(degat_arme) ;
}

void Personnage::recevoir_degat(int degat)
{
  vie-=degat_arme ;
  if(vie<0) {vie=0 ;}
}

void Personnage::boire_potion(int chance)
{
  switch (chance)
  {
    case 1 : {vie+=0 ;}
    case 2 : {vie+=0 ;}
    case 3 : {vie+=10 ;}
  }

  if (vie>100) {vie=100 ;}
}

bool Personnage::en_vie()
{
  if (vie>0) {return true ;}
  else {return false ;}
}

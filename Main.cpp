#include "Personnage.h"
#include "Personnage.cpp"
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std ;

main()
{
  bool life_G, life_J, gagnant, nul ;
  int x, n ;


  cout << "Bienvenue dans la Guerre des PD ! " << "\n" << "\n" << endl ;

  Personnage Jeremy ;
  cout << "Voici le personnage de Jeremy ! " << endl ;
  Jeremy.afficher() ;
  cout << "\n" << endl ;

  Personnage Guillaume ;
  cout << "Voici le personnage de Guillaume ! " << endl ;
  Guillaume.afficher() ;
  cout << "\n" << endl ;

  life_G=Guillaume.en_vie() ;
  life_J=Jeremy.en_vie() ;

  cout << "Entrer un nombre de tour : " ; cin >> n ;

  for(int k=0 ; k<n ; k++)
  {
      x=rand()%10+1 ;

      if (x%2==0 && x!=1) {Jeremy.attaque(Guillaume) ;}
      else {Guillaume.attaque(Jeremy) ;}

      cout << "----------------------------------" << endl ;
      cout << "\n" << "Guillaume " << endl ;
      Guillaume.afficher() ;
      cout << "\n" << endl ;

      cout << "\n" << "Jérémy " << endl ;
      Jeremy.afficher() ;
      cout << "\n" << endl ;
      cout << "----------------------------------" << "\n" << endl ;

      life_G=Guillaume.en_vie() ;
      life_J=Jeremy.en_vie() ;

      if(life_G==0 && life_J>0 && k!=n) {gagnant=true ; break ;}
      else if (life_J==0 && life_G>0 && k!=n) {gagnant=false ; break ;}
      else if (life_G>0 && life_J>0 && k==n) {nul=true ;}

  }

  if(gagnant==true) {cout << "Le gagnant est Jérémy !" << endl ;}
  else if (nul==true) {cout << "Match nulle entre les deux tarlouse" << endl ;}
  else {cout << "Le gagnant est Guillaume !" << endl ;}

  return 0 ;
}

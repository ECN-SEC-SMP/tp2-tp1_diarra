#include <stdexcept> //permet de gérer les exceptions
#include <iostream>
using namespace std;
#include "Vehicule.hpp"
#include "voiture.h"
#include "bateau.h"

//Héritage multiple
// Cette classe hérite des classes Voiture et Bateau
// Elle possède en double les attributs hérités de Vehicule et 
// aura des comportements différents selon qu'elle roule ou navigue
//les attributs de Vehicule sont dupliqués dans VoitureAmphibe
//si on ne souhaitait pas cette duplication, il faudrait declarer la classe de base
//comme virtuelle: dans voiture et bateau: class Voiture : virtual public Vehicule {...}
class VoitureAmphibe : public Voiture, public Bateau {
    private:
    bool estSurTerre_; // true si la voiture amphibie est sur terre, false si elle est sur l'eau
    public:
    VoitureAmphibe();
    VoitureAmphibe(int vitesseMax, int nbPlaces, int occupants);
};

//Pour que les attributs de Vehicule ne soient pas dupliqués dans VoitureAmphibe
//il faudrait déclarer la classe de base comme virtuelle
//dans voiture et bateau: class Voiture : virtual public Vehicule {...}
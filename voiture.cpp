#include <stdexcept> //permet de gérer les exceptions
#include <iostream>
using namespace std;
#include "Vehicule.hpp"

// sous-classe Voiture
class Voiture : public Vehicule {
public:
    Voiture(int vitesseMax, int nbPlaces, int occupants)
        : Vehicule(vitesseMax, nbPlaces, occupants) {}
};
// Redéfinition des méthodes démarrer et arreter pour la classe Voiture

Voitures
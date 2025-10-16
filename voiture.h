#include <stdexcept> //permet de gérer les exceptions
#include <iostream>
using namespace std;
#include "Vehicule.hpp"

// sous-classe Voiture
class Voiture : public Vehicule {
public:
    //la classe fille hérite de toutes les méthodes et attributs de la classe mère
    //mais redéfinit les méthodes demarrer et arreter
    //seul le constructeur diffère dans la façon de l'appeler
    Voiture(int vitesseMax, int nbPlaces, int occupants);
    // redéfinition des méthodes
    void demarrer();
    void arreter();
};
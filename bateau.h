#include <stdexcept> //permet de gérer les exceptions
#include <iostream>
using namespace std;
#include "Vehicule.hpp"

// sous-classe Bateau
class Bateau : public Vehicule {
public:
    //la classe fille hérite de toutes les méthodes et attributs de la classe mère
    //mais redéfinit les méthodes demarrer et arreter
    //seul le constructeur diffère dans la façon de l'appeler
    Bateau(int vitesseMax, int nbPlaces, int occupants);
    // redéfinition des méthodes
    void demarrer();
    void arreter();

};
//Note: pour exécuter le main, il faut inclure la classe mère et le main
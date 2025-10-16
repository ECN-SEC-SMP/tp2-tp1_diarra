#include <stdexcept> //permet de gérer les exceptions
#include <iostream>
using namespace std;
#include "Vehicule.hpp"
#include "voiture.h"

Voiture::Voiture(int vitesseMax, int nbPlaces, int occupants):Vehicule(10, 4, 0){
    // Initialisation spécifique à la voiture
    cout << "Création d'une voiture" << endl;
    // // Initialisation des caractéristiques spécifiques à la voiture
    // vitesseMax_ = 10; // Vitesse maximale spécifique à la voiture
    // nbPlaces_ = 4;     // Nombre de places spécifique à la voiture
    // occupants_ = 0;    // Initialement, pas d'occupants
    // etat_ = ARRET;     // La voiture est à l'arrêt au départ
}


void Voiture::demarrer()
{
    if (etat_ != PANNE_SEVERE & etat_ != PANNE_LEGERE)
    {
        etat_ = MARCHE;
        vitesse_ = 10; // une voiture démarre toujours à 10 km/h
        cout << "La voiture demarre" << endl;
    }
    else
    {
        throw std::string("La voiture est en panne, impossible de demarrer");
    }
}
void Voiture::arreter()
{
    if (etat_ == MARCHE)
    {
        etat_ = ARRET;
        cout << "La voiture s'arrete" << endl;
    }
    else
    {
        throw std::string("La voiture n'est pas en marche, impossible de s'arreter");
    }
}
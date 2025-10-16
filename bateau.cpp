#include <stdexcept> //permet de gérer les exceptions
#include <iostream>
using namespace std;
#include "Vehicule.hpp"
#include "voiture.h"
#include "bateau.h"

Bateau::Bateau(int vitesseMax, int nbPlaces, int occupants) : Vehicule(50, 20, 0) {
    cout << "Creation d'un bateau" << endl;

}

void Bateau::demarrer()
{
    if (etat_ != PANNE_SEVERE & etat_ != PANNE_LEGERE)
    {
        etat_ = MARCHE;
        vitesse_ = 10; // un bateau démarre toujours à 10 km/h

        cout << "Le bateau demarre" << endl;
    }
    else
    {
        throw std::string("Le bateau est en panne, impossible de demarrer");
    }
}
void Bateau::arreter()
{
    if (etat_ == MARCHE)
    {
        etat_ = ARRET;
        cout << "Le bateau s'arrete" << endl;
    }
    else
    {
        throw std::string("Le bateau n'est pas en marche, impossible de s'arreter");
    }
}
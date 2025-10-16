#include <stdexcept> //permet de gérer les exceptions
#include <iostream>
using namespace std;
#include "Vehicule.hpp"
#include "voiture.h"
#include "bateau.h"
#include "voiture_amphibe.h"

VoitureAmphibe::VoitureAmphibe(int vitesseMax, int nbPlaces, int occupants):Voiture(10, 4, 0), Bateau(50, 20, 0){
    cout << "Création d'une voiture amphibie" << endl;
    // Initialisation des attributs spécifiques à VoitureAmphibe
    //
    if(estSurTerre_){
        vitesseMax = Voiture::vitesseMax_; // Vitesse maximale spécifique si la voiture amphibie est sur terre
        nbPlaces = Voiture::nbPlaces_;
        occupants = Voiture::occupants_;
        estSurTerre_ = true;
    }else{
        vitesseMax = Bateau::vitesseMax_; // Vitesse maximale spécifique si la voiture amphibie est sur l'eau
        nbPlaces = Bateau::nbPlaces_;
        occupants = Bateau::occupants_;
        estSurTerre_ = false;
    }
}

    //par défaut, la voiture amphibie est sur terre
VoitureAmphibe::VoitureAmphibe():Voiture(10, 4, 0), Bateau(50, 20, 0){
    estSurTerre_ = true;
}
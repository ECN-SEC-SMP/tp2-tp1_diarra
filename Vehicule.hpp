//  Vehicule.hpp
//  TP_HM_Exc
//
//  Created by Myriam Servières on 28/11/2021.
//
#pragma once
#ifndef Vehicule_hpp
#define Vehicule_hpp

#include <stdexcept>
#include <iostream>

using namespace std;

class Vehicule
{
protected:
    int  vitesse_;
    int  vitesseMax_;
    int  nbPlaces_;
    int  occupants_;
    int  etat_;
    
public:
    enum EtatVehicule {ARRET, MARCHE, PANNE_LEGERE, PANNE_SEVERE};
    
    // constructeur avec valeurs par défaut
    Vehicule(int vitesseMax=0, int nbPlaces=1, int occupants=0);

    // getters
    const int& getVitesse() const { return vitesse_; }
    const int& getVitesseMax() const { return vitesseMax_; }
    const int& getNbPlaces() const { return nbPlaces_; }
    const int& getOccupants() const { return occupants_; }

    virtual void demarrer();
    
    virtual void arreter();
    
    virtual void depanner();
    
    virtual void accelerer(int increment);
    
    virtual void monter(int nbOcc);

    virtual void descendre(int nbOcc);

    // prend en paramètre un nombre aléatoire entre 0 et 1
    // si ce nombre est inférieur à 0.5, le véhicule tombe en panne légère sinon elle sera élevée
    virtual void mettreEnPanne(double random);
    
    // renvoie sous forme de chaine de caractères l'état du véhicule
    virtual string getEtat() const;
    
    // virtual ~Vehicule();
    friend ostream& operator<<(ostream& s,Vehicule const& v);

};

// opérateur d'affichage
ostream& operator<<(ostream& s,Vehicule const& v);

#endif /* Vehicule_hpp */
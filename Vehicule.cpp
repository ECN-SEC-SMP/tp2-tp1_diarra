
#include <stdexcept> //permet de gérer les exceptions
#include <iostream>
using namespace std;

#include "Vehicule.hpp"
//  Vehicule.cpp
    enum EtatVehicule {ARRET, MARCHE, PANNE_LEGERE, PANNE_SEVERE};
    
    // constructeur avec valeurs par défaut
    Vehicule::Vehicule(int vitesseMax, int nbPlaces, int occupants) {
        // Valeurs par défaut
        vitesseMax_ = 0;
        nbPlaces_ = 1;
        occupants_ = 0;
        etat_ = ARRET;
    }
    
    
    // prend en paramètre un nombre aléatoire entre 0 et 1
    // si ce nombre est inférieur à 0.5, le véhicule tombe en panne légère sinon elle sera élevée
    void Vehicule::mettreEnPanne(double random){
        if (random < 0.5) {
            etat_ = PANNE_LEGERE;
            cout << "Le vehicule est en panne legere" << endl;
        } else {
            etat_ = PANNE_SEVERE;
            cout << "Le vehicule est en panne severe" << endl;
        }
    }

        
    // renvoie sous forme de chaine de caractères l'état du véhicule
    string Vehicule::getEtat() const {
        switch (etat_)
        {
        case ARRET:
            return "ARRET";
        case MARCHE:
            return "MARCHE";
        case PANNE_LEGERE:
            return "PANNE_LEGERE";
        default:
            return "PANNE_SEVERE";
        }
    }


// il faut que l'état passe à marche  avec une vitesse supérieur à 0
    void Vehicule::demarrer(){
        if (etat_ != PANNE_SEVERE & etat_ != PANNE_LEGERE) {
            etat_ = MARCHE;
        }
        else {
            throw std::string("Le véhicule est en panne, impossible de demarrer");
        }
    }

    // Arrêter le véhicule: mettre la vitesse à 0 et l'état à ARRET
    void Vehicule::arreter(){
        etat_ = ARRET;
        vitesse_ = 0;
    }
// On passe de l'état en panne: légère ou sévère à l'état Marche
    void Vehicule::depanner(){
        if (etat_ == PANNE_LEGERE || etat_ == PANNE_SEVERE) {
            etat_ = MARCHE;
        }
        else {
            throw std::string("Le véhicule n'est pas en panne, impossible de depanner");
        }
    }

// Accélérer le véhicule d'un incrément donné en paramètre
// on accélère tant qu'on a pas dépassée la vitesse maximale
    void Vehicule::accelerer(int increment){
        if (etat_ == MARCHE) {
            vitesse_ += increment;
        }
        if (vitesse_ > vitesseMax_) {
                throw std::string("Le véhicule n'est pas en marche, impossible d'accelerer");
            }
        if (vitesse_ < 0) {
                throw std::string("La vitesse ne peut pas être négative");
            }
    }

    // Monter des occupants dans le véhicule, i.e. le nombre d'occupants s'incrémente d'autant
    // de fois qu'on appelle cette méthode
    void Vehicule::monter(int nbOcc){
        if (nbPlaces_>occupants_) {//s'il reste de la place
            occupants_+=nbOcc; //occupants augmente et
            nbPlaces_-=nbOcc; //nbPlaces diminue DU MEME NOMBRE
    }
        else{
            throw runtime_error("Le véhicule est plein, impossible de monter");
        }
    }

    // Descendre des occupants dans le véhicule, i.e. le nombre d'occupants se décrémente d'autant
    void Vehicule::descendre(int nbOcc){
        if (occupants_>0) {//s'il y a des occupants
            occupants_-=nbOcc; //occupants diminue et
            nbPlaces_+=nbOcc; //nbPlaces augmente DU MEME NOMBRE
        }
        else{
            throw std::string("Le véhicule est vide, impossible de descendre");
        }
    }

// opérateur d'affichage du contenu global de ma classe
ostream& operator<<(ostream& s,Vehicule const& v) {
    s << "Vitesse: " << v.getVitesse() << ", Vitesse Max: " << v.getVitesseMax()
      << ", Nombre de Places: " << v.getNbPlaces() << ", Occupants: " << v.getOccupants()
      << ", Etat: " << v.getEtat();
    return s;
}

// Deuxième partie: Voiture et Bateau
//  Bateau.cpp
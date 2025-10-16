#include "Vehicule.hpp"
#include "voiture.h"
#include "bateau.h"

int main()
{
    Vehicule v(120, 5, 2);
    // // Test des getters
    // cout << "Le nbre de places par defaut est: " << v.getNbPlaces() << endl;
    // cout << "L'etat du vehicule est: " << v.getEtat() << endl;
    // cout << "La vitesse max du vehicule est: " << v.getVitesseMax() << endl;

    // // Test de mettreEnPanne
    // try
    // {
    //     v.mettreEnPanne(0.3); // Devrait mettre en panne légère
    //     cout << "L'etat du vehicule est: " << v.getEtat() << endl;
    // }
    // catch (const string &message)
    // {
    //     cerr << "Exception attrapee: " << message << endl;
    // }

    // try
    // {
    //     v.mettreEnPanne(0.7); // Devrait mettre en panne sévère
    //     cout << "L'etat du vehicule est: " << v.getEtat() << endl;
    // }
    // catch (const string &message)
    // {
    //     cerr << "Exception attrapee: " << message << endl;
    // }

    // // Test de demarrer
    // try
    // {
    //     v.demarrer();
    //     cout << "L'etat du vehicule apres demarrage est: " << v.getEtat() << endl;
    // }
    // catch (const string &message)
    // {
    //     cerr << "Exception attrapee: " << message << endl;
    // }

    // // Test de arreter
    // try
    // {
    //     v.arreter();
    //     cout << "L'etat du vehicule apres arret est: " << v.getEtat() << endl;
    //     cout << "La vitesse du vehicule apres arret est: " << v.getVitesse() << endl;
    // }
    // catch (const string &message)
    // {
    //     cerr << "Exception attrapee: " << message << endl;
    // }

    // // Test de accelerer
    // try
    // {
    //     v.accelerer(30);
    //     cout << "La vitesse du vehicule apres acceleration est: " << v.getVitesse() << endl;
    // }
    // catch (const string &e)
    // {
    //     cerr << "Exeption attrapee: " << e << endl;
    // }

    // // Test de depanner
    // try
    // {
    //     v.mettreEnPanne(0.4); // Met en panne légère
    //     v.depanner();
    //     cout << "L'etat du vehicule apres depannage est: " << v.getEtat() << endl;
    // }
    // catch (const string &message)
    // {
    //     cerr << "Exception attrapee: " << message << endl;
    // }

    // // Affichage de l'état complet du véhicule
    // cout << v << endl;

    // Affichage des caractéristiques spécifiques à la voiture
    Voiture voiture(180, 5, 2);
    cout << "Caracteristiques specifiques a la voiture:" << endl;
    cout << "Vitesse maximale: " << voiture.getVitesseMax() << endl;
    cout << "Nombre de places: " << voiture.getNbPlaces() << endl;
    cout << "Occupants: " << voiture.getOccupants() << endl;
    cout << "Etat: " << voiture.getEtat() << endl;

    cout << "----------------------------------------" << endl;

    //affichage des caractéristiques spécifiques au bateau
    Bateau Bateau(80, 50, 10);
    cout << "Caracteristiques specifiques au bateau:" << endl;
    cout << "Vitesse maximale: " << Bateau.getVitesseMax() << endl;
    cout << "Nombre de places: " << Bateau.getNbPlaces() << endl;
    cout << "Occupants: " << Bateau.getOccupants() << endl;
    cout << "Etat: " << Bateau.getEtat() << endl;

    return 0;
}
#include "Vehicule.hpp"

int main() {
    Vehicule v(120, 5, 2);
    // Test des getters
    cout<<"Le nbre de places par defaut est: "<<v.getNbPlaces()<<endl;
    cout << "L'etat du vehicule est: " << v.getEtat() << endl;
    cout << "La vitesse max du vehicule est: " << v.getVitesseMax() << endl;

    // Test de mettreEnPanne
    v.mettreEnPanne(0.3); // Devrait mettre en panne légère
    cout << "L'etat du vehicule est: " << v.getEtat() << endl;

    v.mettreEnPanne(0.7); // Devrait mettre en panne sévère
    cout << "L'etat du vehicule est: " << v.getEtat() << endl;

    // Test de demarrer
    v.demarrer();
    cout << "L'etat du vehicule apres demarrage est: " << v.getEtat() << endl;
    
    // Test de arreter
    v.arreter();
    cout << "L'etat du vehicule apres arret est: " << v.getEtat() << endl;
    cout << "La vitesse du vehicule apres arret est: " << v.getVitesse() << endl;

    // Test de depanner
    v.mettreEnPanne(0.4); // Met en panne légère
    v.depanner();
    cout << "L'etat du vehicule apres depannage est: " << v.getEtat() << endl;

    // Affichage de l'état complet du véhicule
    // cout << v << endl;

    return 0;
}
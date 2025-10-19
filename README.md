# TP – Programmation Orientée Objet : Manipulation de fichier en C++

## 📘 Description du projet

L’objectif de ce TP est d’appliquer les principes de l’héritage multiple et de la création d’ex
ceptions.
---

## 🧩 Fonctionnalités principales
La classe de base est une classe Véhicule dont les méthodes principales sont les suivantes:
- mettreEnPanne qui à l'aide d'un float entre 0 et 1 permet de considérer si le véhicule est en panne légère ou sévère
- getEtat retourne l'état du véhicule stocké dans un énum: EtatVehicule
- demarrer qui modifie l'état du véhicule pour qu'il démarre
- arreter qui modifie son état et met la vitesse à 0
- depanner 
- accelerer
- monter
- descendre
Cette classe de base a deux classes filles qui sont Voiture et Bateau qui héritent de toutes les méthodes et attribuent sauf les méthodes demarrer et arreter qui sont modifiés. Enfin, à l'aide d'un héritage multiple, je crée une classe voiture_amphibe qui hérite de la classe de base par l'intermédiaire des sous-classes: Voiture et bateau.
Ci-dessous le diagramme de classe illustrant tout cela:
<img width="823" height="757" alt="image" src="https://github.com/user-attachments/assets/98a01e83-e8b8-47e0-bd2d-9686df2f5f55" />


  

---

## 🧱 Structure du projet
Je consacre deux fichiers à chaque classe: un .h pour la déclaration et définition de la classe et un .cpp pour l'implémentation. Et pour tester le bon fonctionnement, un fichier main est construit.
Ce qui fait un total de 7 fichiers. 
Ps: les inclusions sont bien vérifiées
- Vehicule.h
- Vehicule.cpp
- Voiture.h
- Voiture.cpp
- Bateau.h
- Bateau.cpp
- Voiture_Amphibe.h
- Voiture_Amphibe.cpp
- main.cpp

---

## ⚙️ Compilation et exécution

### 🧰 Compilation
Utiliser **g++** (ou tout compilateur compatible C++17 ou supérieur) :

```bash
g++ vehicule.cpp voiture.cpp bateau.cpp voiture_amphibe.cpp -o monprog
```
```bash
./monprog
```
### Makefile



## 📘 Auteur

### Noms : Mame Diarra DIOP
### Filière : SEC_2.27
### Université : Ecole Centrale de Nantes

📅 TP réalisé le 14 octobre 2025

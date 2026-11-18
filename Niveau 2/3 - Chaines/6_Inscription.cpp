/*
Au sein de la bibliothèque municipale, toutes les personnes souhaitant emprunter un livre doivent s'enregistrer en indiquant leurs noms et prénoms sur une fiche individuelle conservée à l'accueil.
L'habitude veut qu'ils écrivent d'abord leur nom puis leur prénom, ce qui permet de classer les fiches par ordre alphabétique et permet de rapidement retrouver la fiche qu'on cherche.
Malheureusement, depuis un mois, dans toutes les nouvelles fiches créées les personnes ont indiqué en premier leur prénom puis leur nom !
Votre travail consiste à lire ces couples de prénoms et noms et à les afficher dans le bon ordre.

CONSTRAINTS
Chaque nom et prénom est au plus de longueur 100 et ne contient pas d'espace.

INPUT
Sur la première ligne, un entier nbPersonnes : le nombre total de personnes concernées.
Sur chacune des nbPersonnes suivantes, un prénom et un nom, séparés par une espace.

OUTPUT
Pour chaque personne, vous devez écrire sur la même ligne son nom, puis son prénom, séparés par une espace.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nbPersonnes;
    cin >> nbPersonnes;
    string prenom, nom;
    for (int i = 0; i < nbPersonnes; i++)
    {
        cin >> prenom >> nom;
        cout << nom << " " << prenom << endl;
    }
}
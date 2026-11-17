/*
 On vous décrit les charrettes qui composent une caravane, en vous donnant pour chacune, le poids des marchandises qu'elle transporte.

Votre programme doit déterminer quel poids ajouter ou retirer à chaque charrette, pour qu'elles transportent toutes ensuite le même poids, et ce sans modifier le poids total transporté par l'ensemble des charrettes de la caravane.

INPUT

L'entrée commence par un entier nbCharrettes (nbCharrettes <= 3000) : le nombre de charrettes de la caravane.

Les nbCharrettes lignes suivantes décrivent chacune une charrette par un nombre décimal : le poids qu'elle transporte initialement.

OUTPUT

Vous devez afficher nbCharrettes nombres décimaux sur la sortie : le poids à ajouter à chaque charrette (ce qui revient à en retirer si ce nombre est négatif), dans le même ordre que celui de l'entrée. Il n'y a pas d'arrondis à faire.
*/

#include <iostream>
using namespace std;

int main()
{
    int nbCharrettes;
    cin >> nbCharrettes;
    double caravane[nbCharrettes];
    double moyenne = 0;
    for (int i = 0; i < nbCharrettes; i++)
    {
        cin >> caravane[i];
        moyenne += caravane[i];
    }
    moyenne /= nbCharrettes;
    for (int i = 0; i < nbCharrettes; i++)
    {
        cout << moyenne - caravane[i] << endl;
    }
}
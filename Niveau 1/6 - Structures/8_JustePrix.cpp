/*
 Votre programme doit lire un entier nbMarchands (non nul) puis les nbMarchands entiers suivants, qui indiquent le prix des galettes chez chaque marchand, de la position 1 à la position nbMarchands. Votre programme devra ensuite afficher la position du plus petit de ces prix. En cas d'égalité entre deux prix, on prendra la position la plus grande. Tous les prix et positions sont positifs et ne dépassent pas 1 million.
 */

#include <iostream>
using namespace std;

int main()
{
    int nbMarchands, prix;
    cin >> nbMarchands >> prix;
    int min = prix;
    int posmin = 1;
    for (int i = 2; i < nbMarchands + 1; i++)
    {
        cin >> prix;
        if (prix <= min)
        {
            min = prix;
            posmin = i;
        }
    }
    cout << posmin << endl;
}
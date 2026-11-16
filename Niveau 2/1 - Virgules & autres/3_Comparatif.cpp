/*
 Votre programme doit d'abord lire le nombre de légumes mis en vente. Ensuite, pour chacun, il doit lire 3 nombres décimaux : son poids, son âge (en nombre de jours depuis la cueillette), et son prix de vente. Votre programme doit ensuite afficher pour chaque légume son prix au kg (au fur et à mesure que les légumes sont présentés).
 */

#include <iostream>
using namespace std;

int main()
{
    int nb;
    double poids, age, prix;
    double aukg;
    cin >> nb;
    for (int i = 0; i < nb; i++)
    {
        cin >> poids >> age >> prix;
        cout << prix / poids << endl;
    }
}
/*
 Votre programme doit d'abord lire le nombre de Karvas en compétition. Ensuite, pour chaque Karva, il doit :

    lire 4 entiers : son poids, son âge, la longueur de ses cornes et la hauteur au garrot ;
    afficher sa note, sachant qu'elle s'obtient en multipliant la longueur des cornes par la hauteur au garrot, valeur à laquelle on ajoute le poids.
*/

#include <iostream>
using namespace std;

int main()
{
    int nbKar;
    cin >> nbKar;
    int poids, age, longueur, hauteur;
    for (int i = 0; i < nbKar; i++)
    {
        cin >> poids >> age >> longueur >> hauteur;
        cout << longueur * hauteur + poids << endl;
    }
}
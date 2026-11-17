/*
 Il existe 5 types de déplacements, représentés par 5 entiers différents : aller à gauche (1), aller à droite (2), aller tout droit (3), monter (4) et descendre (5).

Le premier entier à lire est le nombre total de déplacements (1000 au maximum). Ensuite, chaque déplacement (représenté par un entier) est indiqué sur sa propre ligne.

Vous devez afficher la suite des déplacements à faire pour aller de votre position actuelle à la sortie.
*/

#include <iostream>
using namespace std;

int main()
{
    int rev[6] = {0, 2, 1, 3, 5, 4};
    int nb;
    cin >> nb;
    int path[nb];
    for (int i = 0; i < nb; i++)
    {
        cin >> path[i];
    }
    for (int i = nb - 1; i >= 0; i--)
    {
        cout << rev[path[i]] << endl;
    }
}
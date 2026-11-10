/*
 Votre programme lira un entier, l'heure d'arrivée, qui sera compris entre 0 et 12 inclus. 0 correspond à midi, 1 à 1h de l'après-midi, etc. et 12 à minuit.

Le prix de la chambre est de 10 pièces à midi, et augmente de 5 pièces chaque heure après midi. Il est donc de 15 pièces à 13h, etc. Il ne peut cependant pas dépasser 53 pièces.

Votre programme devra afficher le prix à payer correspondant à l'heure d'arrivée donnée.
*/

#include <iostream>
using namespace std;

int main()
{
    int heure;
    cin >> heure;
    int res = heure * 5 + 10;
    if (res > 53)
    {
        res = 53;
    }
    cout << res << endl;
}
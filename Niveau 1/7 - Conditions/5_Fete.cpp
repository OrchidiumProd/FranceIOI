/*
 On vous décrit les arrivées et départs des participants d'une fête, et votre programme doit afficher le nombre maximum de personnes qui ont été présentes au même moment. Chacun des invités est identifié par un numéro.

Le premier entier à lire est nbPersonnes : le nombre total de personnes qui se sont rendues à la fête. Ensuite, il y a 2 × nbPersonnes entiers à lire, dans l'ordre chronologique des arrivées et départs. Si l'entier est positif, c'est que la personne de numéro correspondant vient d'arriver, s'il est négatif, elle vient de partir. Une fois qu'une personne est partie, elle ne revient pas.

Votre programme doit déterminer puis afficher le nombre maximum de personnes qui étaient là simultanément.
*/

#include <iostream>
using namespace std;

int main()
{
    int pres = 0;
    int max = 0;
    int nb, pers;
    cin >> nb;
    for (int i = 0; i < 2 * nb; i++)
    {
        cin >> pers;
        if (pers > 0)
        {
            pres++;
        }
        else
        {
            pres--;
        }
        if (pres > max)
        {
            max = pres;
        }
    }
    cout << max << endl;
}
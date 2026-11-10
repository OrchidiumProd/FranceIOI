/*
 On vous donne un intervalle de temps pendant lequel on sait qu'un espion est arrivé, puis la date d'arrivée d'un certain nombre de personnes. Déterminez combien de ces personnes peuvent être cet espion.

Votre programme doit d'abord lire deux entiers : la date de début et la date de fin de l'intervalle pendant lequel on sait que l'espion est arrivé en ville. Il doit ensuite lire un entier nbEntrées, le nombre total de personnes entrées dans la ville, puis les nbEntrées nombres suivants qui représentent les dates d'entrée (non triées) des différentes personnes.

Votre programme doit afficher le nombre de personnes entrées entre les deux dates données, incluses.
*/

#include <iostream>
using namespace std;

int main()
{
    int deb, fin, nb, sus;
    cin >> deb >> fin >> nb;
    int nbSus = 0;
    for (int i = 0; i < nb; i++)
    {
        cin >> sus;
        if (deb <= sus && sus <= fin)
        {
            nbSus++;
        }
    }
    cout << nbSus << endl;
}
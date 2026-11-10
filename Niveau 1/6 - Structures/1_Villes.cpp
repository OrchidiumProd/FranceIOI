/*
 On vous donne le nombre d'habitants d'un certain nombre de lieux que vous visitez. Une ville étant un lieu dont la population est strictement supérieure à 10 000 habitants, déterminez combien de lieux sont des villes.

Votre programme doit lire un entier : le nombre de lieux. Il doit ensuite lire, pour chaque lieu, un entier donnant le nombre de gens qui y habitent. Votre programme doit alors afficher le nombre de villes.
*/

#include <iostream>
using namespace std;

int main()
{
    int nbLieux;
    cin >> nbLieux;

    int pop;
    int nbVilles = 0;

    for (int i = 0; i < nbLieux; i++)
    {

        cin >> pop;

        if (pop > 10000)
        {
            nbVilles++;
        }
    }
    cout << nbVilles << endl;
}
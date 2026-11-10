/*
 Votre programme doit d'abord lire un entier strictement positif, le nombre de jours de marche effectués jusqu'à présent. Il doit ensuite lire, pour chaque jour, la distance parcourue ce jour-là. Il doit alors afficher la distance maximale parcourue en une journée.
 */

#include <iostream>
using namespace std;

main()
{
    int nb;
    cin >> nb;
    int dist;
    int max = 0;
    for (int i = 0; i < nb; i++)
    {
        cin >> dist;
        if (dist > max)
        {
            max = dist;
        }
    }
    cout << max << endl;
}
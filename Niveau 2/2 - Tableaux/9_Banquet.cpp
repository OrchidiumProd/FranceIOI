/*
 Votre programme devra lire deux entiers : le nombre total de positions sur la table (au maximum 1000) et le nombre de changements de positions. Il devra ensuite lire, pour chaque position, un entier : le numéro de la personne qui doit, actuellement, s'installer à cette position.

Il faut lire ensuite les changements exprimés sous la forme de deux entiers chacun : position1 et position2. Un changement (position1, position2) signifie que les deux personnes qui étaient à ses positions doivent échanger leurs places (les positions sont indexées à partir de 0).

Vous devrez afficher, pour chaque position, le numéro de la personne qui s'y trouve une fois tous les changements faits.
*/

#include <iostream>
using namespace std;

int main()
{
    int tpos, cpos, temp, pos1, pos2;
    cin >> tpos >> cpos;
    int places[tpos];
    for (int i = 0; i < tpos; i++)
    {
        cin >> places[i];
    }
    for (int i = 0; i < cpos; i++)
    {
        cin >> pos1 >> pos2;
        temp = places[pos1];
        places[pos1] = places[pos2];
        places[pos2] = temp;
    }
    for (int i = 0; i < tpos; i++)
    {
        cout << places[i] << endl;
    }
}
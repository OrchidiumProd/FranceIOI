/*
  Écrivez un programme qui lit un numéro de mois algoréen, et affiche le nombre de jours de celui-ci. Les Algoréens disposent de leur propre calendrier. Voici les informations dont vous avez besoin :
 Numéro du mois 	Nombre de jours
 1	30
 2	30
 3	30
 4	31
 5	31
 6	31
 7	30
 8	30
 9	30
 10	31
 11	29
 */

#include <iostream>
using namespace std;

int main()
{
    int mois;
    cin >> mois;
    if (mois == 11)
    {
        cout << 29 << endl;
    }
    else if (mois == 10 || mois == 6 || mois == 5 || mois == 4)
    {
        cout << 31 << endl;
    }
    else
    {
        cout << 30 << endl;
    }
}
/*
 Votre programme doit commencer par lire un entier nbZones. Sachant que la roue va tourner de nbZones zones, vous devez calculer (puis afficher) sur quelle zone le curseur va arriver.

Ainsi, si la route tourne de +2 zones alors le curseur arrive sur la zone 2, et si la roue tourne de -2 zones, alors le curseur arrive sur la zone 22.
*/

#include <iostream>
using namespace std;

int main()
{
    int nbZones;
    cin >> nbZones;
    int res = nbZones % 24;
    if (res < 0)
    {
        res += 24;
    }
    cout << res << endl;
}
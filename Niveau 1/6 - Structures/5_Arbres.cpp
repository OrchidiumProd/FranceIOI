/*
Il existe 4 types d'arbres :

    le "Tinuviel" fait moins de 5 mètres de haut et ses feuilles sont composées de plus de 8 folioles
    le "Calaelen" fait plus de 10 mètres de haut et ses feuilles sont composées de plus 10 folioles
    le "Falarion" fait moins de 8 mètres de haut et ses feuilles sont composées de moins de 5 folioles
    le "Dorthonion" fait plus de 12 mètres de haut et ses feuilles sont composées de moins de 7 folioles

Votre programme lira deux entiers, la hauteur et le nombre de folioles de l'arbre, et affichera le nom de l'arbre correspondant.

Toutes les inégalités sont à prendre au sens large, c'est-à-dire que "moins" signifie "moins ou égal" ou et "plus" signifie "plus ou égal".
*/

#include <iostream>
using namespace std;

int main()
{
    int size, fol;
    cin >> size >> fol;
    if (size <= 5 && fol >= 8)
    {
        cout << "Tinuviel" << endl;
    }
    if (size >= 10 && fol >= 10)
    {
        cout << "Calaelen" << endl;
    }
    if (size <= 8 && fol <= 5)
    {
        cout << "Falarion" << endl;
    }
    if (size >= 12 && fol <= 7)
    {
        cout << "Dorthonion" << endl;
    }
}
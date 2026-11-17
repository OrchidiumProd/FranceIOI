/*
 Votre programme devra lire le nombre d'emplacements nbEmplacements (au maximum 1 000), puis pour chaque emplacement à partir de 0, le numéro du marchand à qui est attribué l'emplacement (entre 0 et nbEmplacements − 1).

Ensuite, pour chaque marchand de 0 à nbEmplacements − 1, votre programme devra afficher le numéro de l'emplacement qui lui est attribué.
*/

#include <iostream>
using namespace std;

int main()
{
    int nbEmplacements;
    cin >> nbEmplacements;
    int places[nbEmplacements];
    int marchands[nbEmplacements];
    for (int i = 0; i < nbEmplacements; i++)
    {
        cin >> places[i];
        marchands[places[i]] = i;
    }
    for (int i = 0; i < nbEmplacements; i++)
    {
        cout << marchands[i] << endl;
    }
}
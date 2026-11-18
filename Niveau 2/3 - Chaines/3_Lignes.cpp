/*
Vous décidez d’écrire un programme permettant d’extraire uniquement les lignes impaires d’un texte donné.
CONSTRAINTS
Chaque ligne de texte contient au plus 100 caractères.

INPUT
Sur la première ligne un entier, nbLignes : le nombre total de lignes du texte.
Les nbLignes lignes suivantes contiennent alors le texte.

OUTPUT
Vous devez afficher uniquement les lignes impaires.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nb;
    string ligne;
    cin >> nb;
    cin.ignore();
    for (int i = 0; i < nb; i++)
    {
        getline(cin, ligne);
        if (i % 2 == 0)
        {
            cout << ligne << endl;
        }
    }
}
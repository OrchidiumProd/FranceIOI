/*
 Votre programme devra lire deux entiers, la superficie d'un champ des Arignon et la superficie d'un champ des Evaran. Si l'un des champs est plus grand d'au moins 10 m² (strictement) que l'autre champ, alors il faudra afficher le texte « La famille X a un champ trop grand », « X » devant bien sûr être remplacé par « Arignon » ou « Evaran » selon le cas.
 */

#include <iostream>
using namespace std;

int main()
{
    int ari, eva;
    cin >> ari >> eva;
    int diff = ari - eva;
    if (diff > 10)
    {
        cout << "La famille Arignon a un champ trop grand" << endl;
    }
    else if (diff < -10)
    {
        cout << "La famille Evaran a un champ trop grand" << endl;
    }
}
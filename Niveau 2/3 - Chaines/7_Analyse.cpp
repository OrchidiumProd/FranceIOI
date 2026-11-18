/*
En étudiant différents types de textes (romans, lois, article de journaux…), on se rend compte que non seulement les mots utilisés ne sont pas les mêmes mais aussi que leurs longueurs sont statistiquement différentes : par exemple, il est beaucoup plus fréquent de trouver de longs mots complexes dans un article de loi que dans un livre pour enfants.
Afin d’essayer de déterminer automatiquement à quelle catégorie appartient un livre, on souhaite déterminer le nombre de mots de 1 lettre, 2 lettres, 3 lettres… qu’il contient.

CONSTRAINTS
Le texte contient un ensemble de mots, séparés par des espaces, sans aucun signe de ponctuation.
Chaque mot contient au plus 100 caractères.

INPUT
La première ligne contient deux entiers : nbLignes et nbMots.
Chacune des nbLignes lignes suivantes contient nbMots mots.

OUTPUT
Pour chaque longueur de mot possible, et uniquement s’il y avait des mots de cette longueur dans le texte, vous devez afficher sur une ligne la longueur et le nombre de mots de cette longueur, séparés par un deux-points (il faut mettre un espace de chaque côté du deux-points).
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nbLignes, nbMots;
    cin >> nbLignes >> nbMots;
    int mots[100] = {0};
    string mot;
    for (int i = 0; i < nbLignes; i++)
    {
        for (int j = 0; j < nbMots; j++)
        {
            cin >> mot;
            mots[mot.length() - 1]++;
        }
        cin.ignore();
    }
    for (int i = 0; i < 100; i++)
    {
        if (mots[i] > 0)
        {
            cout << i + 1 << " : " << mots[i] << endl;
        }
    }
}
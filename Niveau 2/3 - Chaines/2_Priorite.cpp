/*
Afin d’éviter les soupçons de favoritisme, la règle suivante a été mise en place : si deux personnes demandent simultanément le même ouvrage, alors la personne qui l’aura est celle dont le nom est alphabétiquement le plus petit.
Vous devez écrire un programme permettant de résoudre automatiquement les éventuels litiges.

CONSTRAINTS
Chaque nom est composé uniquement de lettres majuscules, sans espaces.
Sa longueur sera au plus égale à 50.

INPUT
Sur la première ligne, le nom de la première personne.
Sur la seconde ligne, le nom de la seconde personne.

OUTPUT
Le nom le plus petit selon l’ordre alphabétique, c’est-à-dire le nom qui vient en premier selon cet ordre.
Si les deux noms sont égaux, il ne faut rien afficher car la personne a voulu tricher en faisant deux demandes d’un seul coup.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    if (a < b)
    {
        cout << a << endl;
    }

    else if (b < a)
    {
        cout << b << endl;
    }
}
/*
Les sous-sols de la bibliothèque municipale sont remplis de milliers de cartons d’archives. Afin d’éviter de passer leurs journées avec la tête tournée à 90 degrés pour pouvoir lire ce qui est écrit sur ces cartons, les bibliothécaires ont adopté un système d’étiquettes où les mots sont écrits de haut en bas avec une seule lettre par ligne.
Étant donné un texte écrit normalement, sur une seule ligne, vous devez afficher l’étiquette correspondante, avec un seul caractère par ligne.

CONSTRAINTS
La ligne de texte contiendra toujours moins de 50 caractères.

INPUT
Une seule ligne de texte.

OUTPUT
Les caractères du texte, affichés verticalement.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texte;
    getline(cin, texte);
    for (int i = 0; i < texte.length(); i++)
    {
        cout << texte[i] << endl;
    }
}
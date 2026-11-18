/*
Au cours des siècles une langue évolue, et non seulement les mots apparaissent ou disparaissent, mais certaines lettres deviennent plus utilisées ou au contraire moins utilisées.
Afin de pouvoir rapidement analyser de nombreux textes, on souhaite mettre au point un programme calculant combien de fois une lettre donnée est présente au sein d’un texte.

CONSTRAINTS
Chaque ligne de texte contient au plus 1000 caractères.

INPUT
Sur la première ligne, la lettre majuscule dont on doit chercher le nombre d’apparition dans le texte.
Sur la seconde ligne, un entier nbLignes le nombre de lignes du texte.
Sur les nbLignes lignes suivantes, le texte, ne contenant aucune lettre minuscule.

OUTPUT
Un seul entier, le nombre d’apparitions de la lettre au sein du texte.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char letter;
    int nbLignes;
    cin >> letter >> nbLignes;
    cin.ignore();
    string line;
    int count = 0;
    for (int i = 0; i < nbLignes; i++)
    {
        getline(cin, line);
        for (int j = 0; j < line.length(); j++)
        {
            if (line[j] == letter)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
/*
Alors que vous parcourez de très vieux livres, à la recherche d’indications sur le livre qui vous intéresse en particulier, vous tombez sur un langage que vous ne connaissez pas !
À y regarder de plus près, il s’agit des mêmes mots que ceux que vous utilisez tous les jours, mais tout le texte est écrit "en miroir" : toutes les lettres sont écrites de droite à gauche.
Bien que vous arriviez à déchiffrer les textes présents dans ces livres, cela vous prend beaucoup de temps et vous fatigue beaucoup. Vous décidez d’écrire un programme pour remettre automatiquement dans l’ordre les textes.

CONSTRAINTS
Chaque ligne de texte contient moins de 1000 caractères.

INPUT
Sur la première ligne, un entier nbLignes, le nombre de lignes du texte.
Les nbLignes suivantes contiennent chacune une ligne de texte qu’il faut inverser.

OUTPUT
Pour chaque ligne du texte original, vous devez l’afficher de manière inversée.
*/

#include <iostream>
using namespace std;

string invert(string line)
{
    string res = line;
    for (int i = 0; i < line.length(); i++)
    {
        res[i] = line[line.length() - 1 - i];
    }
    return res;
}

int main()
{
    int nbLignes;
    cin >> nbLignes;
    cin.ignore();
    string line;
    for (int i = 0; i < nbLignes; i++)
    {
        getline(cin, line);
        cout << invert(line) << endl;
    }
}
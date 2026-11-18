/*
 Étant donnée la longueur minimale acceptable d'un résumé, vous décidez d'analyser l'index et de signaler automatiquement aux bibliothécaires les livres ayant des résumés trop courts, afin qu'ils puissent les compléter.

CONSTRAINTS
La longueur de chaque titre de livre et de chaque résumé n'excèdera jamais 1000 caractères.

INPUT
Sur la première ligne, un entier nbLivres, le nombre total de livres.
Sur la deuxième ligne, un entier longueurMinimale, la longueur minimale acceptable pour un résumé de livre.
Les 2 * nbLivres lignes suivantes contiennent, de manière alternée, un titre de livre et le résumé associé.

OUTPUT
Vous devez afficher, à raison d’un par ligne, le titre des livres dont le résumé n'est pas assez long, c'est-à-dire dont la longueur n'est pas au moins égale à longueurMinimale.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nbLivres, longueurMinimale;
    string titre, resume;
    cin >> nbLivres >> longueurMinimale;
    cin.ignore();
    for (int i = 0; i < nbLivres; i++)
    {
        getline(cin, titre);
        getline(cin, resume);
        if ((int)(resume.length()) < longueurMinimale)
        {
            cout << titre << endl;
        }
    }
}
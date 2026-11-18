/*
Les employés de la bibliothèque, constamment entourés de livres, n’ont jamais le temps de lire tous les livres qu’ils souhaiteraient. Chacun a donc mis au point son propre algorithme de sélection, et l’un d’entre eux a choisi un système basé sur la longueur des titres des livres !
Sur une étagère sont alignés tous les livres qui l’intéressent. Chaque mois, cette personne commence par lire le premier livre présent sur l’étagère, puis le second et ainsi de suite jusqu’à la fin. Seulement, elle ne lira un livre que si son titre est strictement plus long que ceux de tous les livres qu’elle a lus pendant le mois. Si ce n’est pas le cas, elle enlève le livre de l’étagère, sans le lire.
Étant donnée une liste de titres de livres possibles pour le mois suivant, donnés dans l’ordre où ils apparaissent dans l’étagère, vous devez déterminer lesquels elle va lire.

CONSTRAINTS
Chaque titre de livre contiendra au plus 1000 caractères.

INPUT
Sur la première ligne, un entier nbLivres, le nombre total de livres.
Les nbLivres lignes suivantes contiennent chacune un titre de livre.

OUTPUT
La liste des titres respectant la règle donnée dans l’énoncé.
*/

#include <iostream>
using namespace std;

int main()
{
    int nbLivres;
    cin >> nbLivres;
    cin.ignore();
    int min = 0;
    string titre;
    for (int i = 0; i < nbLivres; i++)
    {
        getline(cin, titre);
        if ((int)(titre.length()) > min)
        {
            min = (int)(titre.length());
            cout << titre << endl;
        }
    }
}
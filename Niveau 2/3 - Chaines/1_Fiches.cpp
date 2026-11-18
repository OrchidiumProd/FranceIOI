/*
Votre travail consiste à lire le contenu d’une fiche et à remettre les informations dans l’ordre.

CONSTRAINTS
Il y a toujours 6 titres de livres (et donc 6 noms d’auteurs) sur chaque fiche.
Les titres de livres et les noms d’auteurs font toujours moins de 200 caractères de long.

INPUT
Pour chacun des 6 livres, une ligne contenant le nom de l’auteur, et une ligne contenant le titre du livre.

OUTPUT
Pour chacun des livres, vous devez afficher sur une ligne le titre du livre, puis sur la ligne suivante le nom de l’auteur.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string auteur;
    string titre;
    for (int i = 0; i < 6; i++)
    {
        getline(cin, auteur);
        getline(cin, titre);
        cout << titre << endl
             << auteur << endl;
    }
}
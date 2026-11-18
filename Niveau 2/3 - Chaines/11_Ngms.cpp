/*
Les personnes travaillant à la bibliothèque aiment particulièrement se poser des petites énigmes, d’inspiration littéraires. Cette fois-ci, Agrarelle a décidé de créer des énigmes basées sur des titres de livres : elle va supprimer l’ensemble des voyelles (et les espaces) d’un titre et du nom de son auteur et ses collègues devront retrouver le titre original (ainsi que le nom de l’auteur).

CONSTRAINTS
Le titre et le nom de l’auteur font chacun moins de 100 caractères.
Ils ne contiennent que des lettres majuscules et des espaces.

INPUT
Sur la première ligne, le titre du livre.
Sur la seconde ligne, le nom de l’auteur.

OUTPUT
Sur la première ligne, le titre du livre, sans aucune voyelle, ni espace.
Sur la seconde ligne, le nom de l’auteur, sans aucune voyelle, ni espace.
*/

#include <iostream>
using namespace std;

bool isVoyelle(char c)
{
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || c == ' ');
}

int main()
{
    string titre, aut;
    getline(cin, titre);
    getline(cin, aut);
    for (int i = 0; i < titre.length(); i++)
    {
        if (!isVoyelle(titre[i]))
        {
            cout << titre[i];
        }
    }
    cout << endl;
    for (int i = 0; i < aut.length(); i++)
    {
        if (!isVoyelle(aut[i]))
        {
            cout << aut[i];
        }
    }
    cout << endl;
}
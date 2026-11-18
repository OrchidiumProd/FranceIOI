/*
Comme chaque année, lors de la rentrée universitaire, de nombreux étudiants viennent s’inscrire à la bibliothèque et une longue file d’attente se forme. Afin d’essayer d'accélérer les choses, les fiches d’inscription de tous les étudiants ont déjà été préparées et ils n’ont plus qu’à les récupérer.
Trois personnes sont en charge de distribuer les fiches : la première s’occupe des étudiants dont le nom commence par une lettre comprise entre A et F (inclus), la seconde personne des étudiants dont le nom commence par une lettre comprise entre G et P (inclus) et la troisième du reste des étudiants.
Quand un nouvel étudiant arrive, il donne son nom et il faut lui indiquer quelle personne il doit aller voir.

CONSTRAINTS
Les noms des étudiants font moins de 50 caractères de long et commencent par une lettre majuscule.

INPUT
Un nom d’étudiant.

OUTPUT
Un entier, 1, 2 ou 3, selon que l’étudiant doit aller voir la première, la seconde ou la troisième personne.

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nom;
    getline(cin, nom);
    if (nom[0] <= 'F')
    {
        cout << 1 << endl;
    }
    else if ('G' <= nom[0] && nom[0] <= 'P')
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
}
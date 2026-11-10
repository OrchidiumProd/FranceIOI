/*
 Votre programme devra lire un premier entier : le nombre de membres nbMembres qui constituent une équipe. Ensuite, il devra lire les poids (en kilogrammes), au total nbMembres × 2, sachant que le premier poids est celui d'un joueur de la 1re équipe, le deuxième poids celui d'un joueur de la 2e équipe, le troisième la 1re équipe, le quatrième la 2e équipe, etc.

Après avoir calculé le poids total de chaque équipe, vous devrez afficher le texte « L'équipe X a un avantage » (en remplaçant X par la valeur 1 ou 2), en considérant qu'une équipe est avantagée si elle a un poids total supérieur à celui de l'autre.

Vous afficherez ensuite le texte « Poids total pour l'équipe 1 : » suivi du poids de l'équipe 1, puis « Poids total pour l'équipe 2 : » suivi du poids de l'équipe 2 (voir l'exemple ci-dessous).

On vous garantit que les deux équipes n'auront pas le même poids total.
*/

#include <iostream>
using namespace std;

int main()
{
    int nbMembres;
    cin >> nbMembres;

    int poids1 = 0;
    int poids2 = 0;
    int pe1, pe2;

    for (int i = 0; i < nbMembres; i++)
    {
        cin >> pe1 >> pe2;
        poids1 += pe1;
        poids2 += pe2;
    }

    if (poids1 > poids2)
    {
        cout << "L'équipe 1 a un avantage" << endl;
    }
    else
    {
        cout << "L'équipe 2 a un avantage" << endl;
    }
    cout << "Poids total pour l'équipe 1 : " << poids1 << endl;
    cout << "Poids total pour l'équipe 2 : " << poids2 << endl;
}
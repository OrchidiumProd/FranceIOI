/*
 Un livre de comptes décrit les achats et ventes successives de 10 produits numérotés de 1 à 10. Le livre décrit les opérations depuis une situation où le stock de chacun des produits était de zéro.

Chaque ligne du livre de comptes décrit l'achat (augmentation du stock) ou la vente (réduction du stock) d'une certaine quantité de l'un des produits.

Votre objectif est de déterminer pour chaque produit, la quantité restant dans le stock à l'issue de l'ensemble de ces achats et ventes.

INPUT

La première ligne contient un entier nbOperations : le nombre d'opérations décrites dans le livre de comptes.

Suivent ensuite nbOperations paires d'entiers, où le premier entier de chaque paire est le numéro de l'ingrédient concerné par l'opération, et le deuxième est la quantité. Si la quantité est négative, l'opération est une vente, et si elle est positive, l'opération est un achat du produit indiqué.

OUTPUT

Vous devez afficher 10 entiers sur la sortie : la quantité restante pour chacun des produits dans l'ordre de leur numéro, une fois l'ensemble des opérations décrites dans le livre effectuées
*/

#include <iostream>
using namespace std;

int main()
{
    int quan[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int nbOps, ingr, acve;
    cin >> nbOps;
    for (int i = 0; i < nbOps; i++)
    {
        cin >> ingr >> acve;
        quan[ingr - 1] += acve;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << quan[i] << endl;
    }
}
/*
 On vous donne le numéro du produit préféré par différentes personnes. Écrivez un programme qui indique pour chaque numéro de produit, le nombre de personnes dont c'est le produit préféré.

 INPUT

Les deux premiers entiers à lire sont le nombre total de produits nbProduits et le nombre de personnes nbPersonnes (nbPersonnes <= 1000) ayant exprimé leur souhait.

On lit ensuite nbPersonnes entiers : les numéros des produits préférés des différentes personnes. Les produits sont numérotés de 0 à nbProduits - 1.

OUTPUT

Vous devez afficher nbProduits entiers : pour chaque produit dans l'ordre de leur numéro, affichez le nombre de personnes qui le préfèrent.
*/

#include <iostream>
using namespace std;

int main()
{
    int nbProduits, nbPersonnes, prod;
    cin >> nbProduits >> nbPersonnes;
    int pref[nbProduits] = {0};
    for (int i = 0; i < nbPersonnes; i++)
    {
        cin >> prod;
        pref[prod] += 1;
    }
    for (int i = 0; i < nbProduits; i++)
    {
        cout << pref[i] << endl;
    }
}
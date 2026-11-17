/*
 Il y a 10 ingrédients dans la recette et les quantités nécessaires pour chacun sont (en grammes) : 500, 180, 650, 25, 666, 42, 421, 1, 370 et 211.

Votre programme doit lire un entier, le numéro d'un ingrédient (compris entre 0 et 9) et afficher la quantité associée à cet ingrédient.
*/

#include <iostream>
using namespace std;

int main()
{
    int nb;
    cin >> nb;
    int ingr[10] = {500, 180, 650, 25, 666, 42, 421, 1, 370, 211};
    cout << ingr[nb] << endl;
}
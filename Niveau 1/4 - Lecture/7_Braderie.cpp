/*
 Il y a trois entiers à lire : la position de départ positionDepart, la largeur d'un emplacement largeurEmplacement et le nombre de vendeurs nbVendeurs.

Vous devez afficher une suite de nombres, partant de positionDepart et augmentant de largeurEmplacement à chaque fois. Il y a au total nbVendeurs augmentations à faire. Vous devez afficher la valeur de chacun des nombres de la suite.
*/

#include <iostream>
using namespace std;

int main()
{
    int positionDepart;
    int largeurEmplacement;
    int nbVendeurs;

    cin >> positionDepart;
    cin >> largeurEmplacement;
    cin >> nbVendeurs;

    for (int i = 0; i <= nbVendeurs; i++)
    {
        cout << i * largeurEmplacement + positionDepart << endl;
    }
}
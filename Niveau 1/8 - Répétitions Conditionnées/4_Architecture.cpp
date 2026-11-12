/*
 Votre programme doit d'abord lire un entier : le nombre maximum de pierres dont pourra être composée la pyramide. Il devra ensuite calculer et afficher un entier : la hauteur de la plus grande pyramide qui pourra être construite, ainsi que le nombre de pierres qui sera nécessaire.
 */

#include <iostream>
using namespace std;

int main()
{
    int height = 0;
    int stones = 0;
    int budget;
    cin >> budget;
    while (stones + (height + 1) * (height + 1) <= budget)
    {
        height++;
        stones += height * height;
    }
    cout << height << endl;
    cout << stones << endl;
}
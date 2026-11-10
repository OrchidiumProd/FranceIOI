/*
 On vous décrit une zone de recherche rectangulaire, parallèle aux axes, puis la position d'un certain nombre de maisons. Écrivez un programme qui détermine combien de maisons sont dans cette zone.

Votre programme devra lire, dans l'ordre : l'abscisse minimale, l'abscisse maximale, l'ordonnée minimale et l'ordonnée maximale du rectangle. Il lira ensuite le nombre total de maisons, puis pour chaque maison, son abscisse et son ordonnée.

Votre programme devra déterminer puis afficher le nombre de maisons qui se trouvent dans la zone de recherche. Si une maison est exactement sur le bord de la zone, elle doit ête comptée.
*/

#include <iostream>
using namespace std;

int main()
{
    int xmin, xmax, ymin, ymax, nb, x, y;
    cin >> xmin >> xmax >> ymin >> ymax >> nb;
    int nbSus = 0;
    for (int i = 0; i < nb; i++)
    {
        cin >> x >> y;
        if (xmin <= x && x <= xmax && ymin <= y && y <= ymax)
        {
            nbSus++;
        }
    }
    cout << nbSus << endl;
}
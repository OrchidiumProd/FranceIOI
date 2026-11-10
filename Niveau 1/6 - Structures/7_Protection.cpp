/*
 Le programme doit d'abord lire un entier strictement positif correspondant au nombre de maisons. Ensuite, pour chaque maison, il doit lire la position horizontale (l'abscisse, le "x") et sa position verticale (l'ordonnée, le "y") de cette maison. Toutes les abscisses et ordonnées sont des entiers compris entre zéro et 1 million.

Le programme doit alors afficher le périmètre de la plus petite clôture rectangulaire englobant toutes les maisons. Ce rectangle doit avoir ses côtés parallèles aux axes du repère, comme montré sur l'illustration.
*/

#include <iostream>
using namespace std;

int main()
{
    int nb, x, y;
    cin >> nb >> x >> y;
    int xmin = x, xmax = x, ymin = y, ymax = y;
    for (int i = 0; i < nb - 1; i++)
    {
        cin >> x >> y;
        if (x < xmin)
        {
            xmin = x;
        }
        else if (x > xmax)
        {
            xmax = x;
        }
        if (y < ymin)
        {
            ymin = y;
        }
        else if (y > ymax)
        {
            ymax = y;
        }
    }
    cout << 2 * (ymax - ymin + xmax - xmin) << endl;
}
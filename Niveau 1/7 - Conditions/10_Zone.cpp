/*
 Sur une table est placée une feuille de papier rectangulaire de 90 cm de large et 70 cm de haut, composée de zones de différentes couleurs, comme le décrit la figure ci-dessous. Un certain nombre de personnes placent l'une après l'autre un jeton où elles le souhaitent sur la table, à l'exception des frontières entre les différentes zones.

On vous donne en entrée le nombre de jetons qui ont été déposés, puis, pour chaque jeton, ses coordonnées sur la feuille par rapport à l'origine en haut à gauche, sous la forme d'une abscisse et d'une ordonnée entre −1 000 et 1 000.

Votre programme devra qualifier chaque jeton avec l'un des textes suivants, en fonction de la couleur sur laquelle il se trouve :

    « En dehors de la feuille »
    « Dans une zone jaune »
    « Dans une zone bleue »
    « Dans une zone rouge »

Essayez d'écrire votre programme de sorte qu'il y ait au maximum une condition par possibilité de texte affiché.
*/

#include <iostream>
using namespace std;

int zone(int x, int y)
{
    bool obst = (x >= 25 && x <= 50 && y >= 20 && y <= 45);
    bool jobst = ((y == 20 && x >= 25 && x <= 50) || (y == 45 && x >= 25 && x <= 50) || (x == 25 && y >= 20 && y <= 45) || (x == 50 && y >= 20 && y <= 45));
    if ((x > 15 && x < 45 && y > 60 && y < 70) || (x > 60 && x < 85 && y > 60 && y < 70))
    {
        return 3;
    }
    else if (x > 10 && x < 85 && y > 10 && y < 55 && !obst)
    {
        return 2;
    }
    else if (x > 0 && x < 90 && y > 0 && y < 70 && !jobst)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int nb, x, y, z;
    cin >> nb;
    for (int i = 0; i < nb; i++)
    {
        cin >> x >> y;
        z = zone(x, y);
        if (z == 0)
        {
            cout << "En dehors de la feuille" << endl;
        }
        else if (z == 1)
        {
            cout << "Dans une zone jaune" << endl;
        }
        else if (z == 2)
        {
            cout << "Dans une zone bleue" << endl;
        }
        else
        {
            cout << "Dans une zone rouge" << endl;
        }
    }
}

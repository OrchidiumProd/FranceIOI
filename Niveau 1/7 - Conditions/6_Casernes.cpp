/*
 Votre programme doit lire la description de plusieurs paires de zones rectangulaires, et pour chaque paire, déterminer si les deux zones s'intersectent.

Vous devez lire un premier entier, le nombre de paires de zones que votre programme devra tester. Ensuite, pour chaque paire possible, deux zones rectangulaires et parallèles aux axes vous sont données l'une après l'autre. Chaque zone est décrite par 4 entiers : son abscisse minimale et maximale puis son ordonnée minimale et maximale.

Sur cet exemple, la zone du bas est donc décrite par les 4 entiers (1, 6, 1, 5) et l'autre par (4, 9, 3, 8) :

Pour chaque paire de zones, votre programme doit écrire "OUI" si les zones s'intersectent et "NON" sinon. Si elles ne font que se toucher sur les bords il doit écrire "NON".
*/

#include <iostream>
using namespace std;

int main()
{
    int nb, xmin1, xmax1, ymin1, ymax1, xmin2, xmax2, ymin2, ymax2;
    bool in;
    cin >> nb;
    for (int i = 0; i < nb; i++)
    {
        cin >> xmin1 >> xmax1 >> ymin1 >> ymax1 >> xmin2 >> xmax2 >> ymin2 >> ymax2;
        in = false;
        for (int x = xmin1 + 1; x < xmax1; x++)
        {
            for (int y = ymin1 + 1; y < ymax1; y++)
            {
                if (xmin2 <= x && x <= xmax2 && ymin2 <= y && y <= ymax2)
                {
                    in = true;
                }
            }
        }
        if (in)
        {
            cout << "OUI" << endl;
        }
        else
        {
            cout << "NON" << endl;
        }
    }
}
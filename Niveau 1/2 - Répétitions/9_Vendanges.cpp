/*
 Le champ est représenté ci-dessous :
  1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16
| R | . | . | . | . | . | . | . | . | . | . | . | . | . | . | C |

Le robot est initialement tout à gauche, là où se trouve un grand tas de raisins. Il devra, 20 fois :

    ramasser des raisins pour remplir la hotte de ramassage ;
    se rendre à la charrette ;
    déposer le contenu de la hotte ;
    revenir au point de départ.
*/

#include <iostream>
#include "robot.h"
using namespace std;

int main()
{
    for (int i = 0; i < 20; i++)
    {
        ramasser();
        for (int j = 0; j < 15; j++)
        {
            droite();
        }
        deposer();
        for (int j = 0; j < 15; j++)
        {
            gauche();
        }
    }
}
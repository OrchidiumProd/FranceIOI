/*
 Votre robot doit faire 108 fois le tour du chemin vert représenté ci-dessous, en tournant dans le sens des aiguilles d'une montre.
################
#              #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
#D             #
################

Le robot se trouve initialement en bas à gauche. Chaque case représente 1 km, donc pour faire un tour, le robot doit se déplacer successivement de 13 km dans chacune des 4 directions.
*/

#include <iostream>
#include "robot.h"
using namespace std;

int main()
{
    for (int i = 0; i < 108; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            haut();
        }
        for (int j = 0; j < 13; j++)
        {
            droite();
        }
        for (int j = 0; j < 13; j++)
        {
            bas();
        }
        for (int j = 0; j < 13; j++)
        {
            gauche();
        }
    }
}

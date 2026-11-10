/*
 Le palais est un grand carré de taille 10×10, et le robot se trouve au départ dans le coin en bas à gauche, comme représenté ci-dessous.
Votre robot doit passer une et une seule fois dans chacune des pièces, puis se retrouver dans sa case de départ.
 */

#include <iostream>
#include "robot.h"
using namespace std;

int main()
{
    for (int j = 0; j < 9; j++)
    {
        haut();
    }
    droite();
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            bas();
        }
        droite();
        for (int j = 0; j < 8; j++)
        {
            haut();
        }
        droite();
    }
    for (int j = 0; j < 9; j++)
    {
        bas();
    }
    for (int j = 0; j < 9; j++)
    {
        gauche();
    }
}
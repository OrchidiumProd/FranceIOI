/*
 Votre robot doit partir de la case de gauche (en orange), aller chercher les anneaux (les ronds sur fond bleu) dans l'ordre (de gauche à droite) et les ramener un par un à la case de départ.
 */

#include <iostream>
#include "robot.h"
using namespace std;

int main()
{
    int dist = 1;
    while (dist <= 10)
    {
        for (int i = 0; i < dist; i++)
        {
            droite();
        }
        ramasser();
        for (int i = 0; i < dist; i++)
        {
            gauche();
        }
        deposer();
        dist++;
    }
}

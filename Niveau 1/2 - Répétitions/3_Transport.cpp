/*
 Votre programme doit diriger le robot dans la rue schématisée ci-dessous :
#P-D-----------------------------M#

La rue est représentée par 33 cases entre deux murs de briques. Votre robot se trouve au départ sur la 3e case. Votre programme doit le déplacer jusqu'à l'endroit où se trouve la personne âgée, au récipient d'eau en bleu, puis afficher précisément le texte "Bonjour, laissez-moi vous aider" (avec un retour à la ligne à la fin de la phrase). Ensuite, il doit ramasser le récipient qui se trouve sur cette même case, et avancer de 32 cases pour le déposer à la maison. Il ne doit à aucun moment se déplacer sur les cases contenant un mur.

Votre programme ne doit pas faire plus d'une vingtaine de lignes.
*/

#include <iostream>
#include "robot.h"
#define repeat(nb) for (int _loop = 0, _max = (nb); _loop < _max; _loop++)
using namespace std;

int main()
{
    repeat(2)
    {
        gauche();
    }
    cout << "Bonjour, laissez-moi vous aider" << endl;
    ramasser();
    repeat(32)
    {
        droite();
    }
    deposer();
}
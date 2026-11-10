/*
 Vous vous trouvez devant une source d'eau qui jaillit de la montagne, et vous disposez de deux tonneaux vides de capacités 5 litres et 3 litres. Écrivez un programme qui effectue une série de transvasements permettant d'obtenir exactement 4 litres d'eau dans le plus grand tonneau.

Arrêtez-vous bien dès que le grand tonneau contient exactement 4 litres.
*/

#include <iostream>
#include "robot.h"
using namespace std;

int main()
{
    remplir(5);
    transferer(5, 3);
    vider(3);
    transferer(5, 3);
    remplir(5);
    transferer(5, 3);
}
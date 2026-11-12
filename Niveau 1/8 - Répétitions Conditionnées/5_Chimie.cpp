/*
 Votre programme devra lire trois entiers : le nombre total de mesures envisagées ainsi que la température minimum et maximum autorisées. Les entiers suivants seront les différentes températures relevées au cours du temps.

Tant que les températures relevées restent dans le bon intervalle, votre programme devra écrire le texte « Rien à signaler », mais dès que la température n'est pas bonne il doit écrire le texte « Alerte !! » et s'arrêter.
*/

#include <iostream>
using namespace std;

int main()
{
    int nb = 0;
    int nbmes, tmin, tmax, t;
    cin >> nbmes >> tmin >> tmax >> t;
    bool cond = (tmin <= t && t <= tmax);
    while (cond && nb < nbmes)
    {
        cout << "Rien à signaler" << endl;
        cin >> t;
        cond = (tmin <= t && t <= tmax);
        nb++;
    }
    if (nb != nbmes)
    {
        cout << "Alerte !!" << endl;
    }
}
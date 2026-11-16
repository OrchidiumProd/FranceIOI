/*
 Votre programme devra lire un décimal, le temps (en secondes) entre le moment où vous voyez l'éclair et le moment où vous entendez le tonnerre. Il devra calculer et afficher la distance entre vous et l'orage, arrondi au kilomètre près.

On supposera que la lumière se déplace instantanément. La vitesse du son dépend de paramètres comme l'altitude, la température...mais on supposera qu'en cette soirée elle vaut 340,29 mètres / seconde.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double temps;
    cin >> temps;
    cout << (int)(round(340.29 * temps / 1000)) << endl;
}
/*
 Votre programme devra lire un nombre décimal, la quantité de ciment nécessaire pour les fondations de votre nouvelle maison, en kilos. Sachant que le ciment n'est vendu qu'en sacs de 60 kilos et que un sac coûte 45 euros, votre programme devra afficher le coût total du ciment.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double quan;
    cin >> quan;
    cout << ceil(quan / 60) * 45 << endl;
}
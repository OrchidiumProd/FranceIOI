/*
 Votre programme devra lire un entier : le nombre de jours que dure la randonnée. Ensuite, il devra afficher le nombre de fois que l'incantation est répétée, sachant qu'elle est prononcée une fois par seconde pendant 16 heures par jour (les 8 autres heures, on dort !).
 */

#include <iostream>
using namespace std;

int main()
{
    int days;
    cin >> days;
    cout << days * 16 * 60 * 60;
}
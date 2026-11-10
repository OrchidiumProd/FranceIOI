/*
 Un socle est ainsi constitué d'étages, chaque étage ayant une hauteur égale à une unité et une base carrée. Le côté des carrés diminue de une unité à chaque étage.

Votre programme doit lire deux entiers, représentant respectivement la largeur du socle au niveau du sol et la largeur du socle au niveau de la face supérieure du socle. Il doit ensuite calculer et afficher le volume du socle.
*/

#include <iostream>
using namespace std;

int main()
{
    int bot;
    int top;
    cin >> bot;
    cin >> top;
    int res = 0;
    for (int i = 0; i <= bot - top; i++)
    {
        res += (bot - i) * (bot - i);
    }
    cout << res << endl;
}
/*
 Écrivez un programme qui lit un nombre décimal (un nombre à virgule) représentant un nombre de lieues et affiche le nombre de kilomètres correspondant. Un kilomètre vaut exactement 0.707 lieues.
 */

#include <iostream>
using namespace std;

int main()
{
    double dist;
    cin >> dist;
    cout << dist / 0.707 << endl;
}

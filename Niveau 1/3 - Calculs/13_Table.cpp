/*
 Voici à quoi ressemble la table de multiplication allant jusqu'à 5 fois 5.

1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25

Écrivez un programme qui affiche une table de multiplication allant jusqu'à 20 fois 20.
*/

#include <iostream>
using namespace std;

int main()
{
    int nb = 1;
    while (nb <= 20)
    {
        for (int i = 1; i <= 20; i++)
        {
            cout << (i * nb) << " ";
        }
        cout << endl;
        nb++;
    }
}
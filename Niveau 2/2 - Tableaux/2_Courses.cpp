/*
 Il y a 10 ingrédients et ils ont tous un prix au kilo différent : 9, 5, 12, 15, 7, 42, 13, 10, 1 et 20.

Votre programme devra lire 10 entiers, le poids (en kilogrammes) qu'il faut acheter pour chaque ingrédient. Il devra calculer le coût total de ces achats.
*/

#include <iostream>
using namespace std;

int main()
{
    int prix[10] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
    int nb;
    int total = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> nb;
        total += nb * prix[i];
    }
    cout << total << endl;
}
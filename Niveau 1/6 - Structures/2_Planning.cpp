/*
 Votre programme doit d'abord lire un entier décrivant votre position actuelle sur la route, sous la forme d'un nombre de kilomètres par rapport au début de la route. Ensuite, il doit lire un entier donnant le nombre de villages. Pour chaque village, il doit lire un entier décrivant la position de ce village le long de cette même route. Votre programme doit alors afficher le nombre de villages qui se trouvent à une distance inférieure ou égale à 50 km de votre position actuelle.
 */

#include <iostream>
using namespace std;

int main()
{
    int pos, nbVilles;
    cin >> pos >> nbVilles;
    int ville;
    int count = 0;
    for (int i = 0; i < nbVilles; i++)
    {
        cin >> ville;
        if (pos - ville <= 50 && pos - ville >= -50)
        {
            count++;
        }
    }
    cout << count << endl;
}
/*
 Votre programme doit d'abord lire un entier, la population totale de la ville. Sachant qu'une personne était malade au jour 1 et que chaque malade contamine deux nouvelles personnes le jour suivant (et chacun des jours qui suivent), vous devez calculer à partir de quel jour toute la population de la ville sera malade.
 */

#include <iostream>
using namespace std;

int main()
{
    int pop;
    cin >> pop;
    int days = 1;
    int dis = 1;
    while (dis < pop)
    {
        dis += 2 * dis;
        days++;
    }
    cout << days << endl;
}
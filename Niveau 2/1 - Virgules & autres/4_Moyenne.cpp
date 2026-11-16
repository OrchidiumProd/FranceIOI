/*
 Votre programme doit d'abord lire un premier entier, qui décrit le nombre de notes obtenues. Ensuite, il doit lire chacune de ces notes, qui sont également des nombres entiers. Enfin, il doit afficher la moyenne de toutes ces notes.
 */

#include <iostream>
using namespace std;

int main()
{
    int nb;
    double moy, note;
    cin >> nb;
    for (int i = 0; i < nb; i++)
    {
        cin >> note;
        moy += note / nb;
    }
    cout << moy << endl;
}
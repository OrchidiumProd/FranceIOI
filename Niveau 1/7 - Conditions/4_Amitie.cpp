/*
 Vous devez écrire un programme qui détermine si deux soldats ont été de garde en même temps.

Votre programme doit lire quatre entiers : la date du début et la date de fin (incluse) du service du premier soldat puis celles du second soldat.

Si les deux soldats ont, à un moment (même une seule seconde), été de garde en même temps le programme devra écrire "Amis" et sinon "Pas amis".
*/

#include <iostream>
using namespace std;

int main()
{
    int deb1, fin1, deb2, fin2;
    cin >> deb1 >> fin1 >> deb2 >> fin2;
    if ((deb1 <= deb2 && deb2 <= fin1) || (deb2 <= deb1 && deb1 <= fin2))
    {
        cout << "Amis" << endl;
    }
    else
    {
        cout << "Pas amis" << endl;
    }
}
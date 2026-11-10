/*
 Votre programme doit lire 20 entiers puis afficher la somme de tous ces entiers.
 */

#include <iostream>
using namespace std;

int main()
{
    int nb;
    int res = 0;
    for (int i = 0; i < 20; i++)
    {
        cin >> nb;
        res += nb;
    }
    cout << res << endl;
}

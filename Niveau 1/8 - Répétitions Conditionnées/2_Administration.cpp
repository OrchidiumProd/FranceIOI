/*
 Votre programme devra lire une suite d'entiers positifs et afficher leur somme. On ne sait pas combien il y aura d'entiers, mais la suite se termine toujours par la valeur -1 (qui n'est pas une dépense, juste un marqueur de fin).
 */

#include <iostream>
using namespace std;

int main()
{
    int nb;
    int tot = 0;
    cin >> nb;
    while (!(nb == -1))
    {
        tot += nb;
        cin >> nb;
    }
    cout << tot << endl;
}
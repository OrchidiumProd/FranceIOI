/*
 Votre programme devra lancer le décompte en partant de 100 puis annoncer le décollage, c'est-à-dire afficher une séquence d'annonces de la forme :

100
99
...
2
1
0
Décollage !

en remplaçant les « … » par toutes les valeurs intermédiaires.

Important : votre programme ne doit pas faire plus d'une quinzaine de lignes.
*/

#include <iostream>
using namespace std;

int main()
{
    int nb = 100;
    while (nb >= 0)
    {
        cout << nb << endl;
        nb--;
    }
    cout << "Décollage !" << endl;
}
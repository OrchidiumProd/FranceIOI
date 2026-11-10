/*
 Le robot devra compter jusqu'à 100, c'est à dire afficher les entiers de 1 à 100, un par ligne, et ensuite afficher « J'arrive ! ». Ainsi, s'il ne devait compter que jusqu'à 3 au lieu de 100, votre robot devrait afficher :

1
2
3
J'arrive !

Important : votre programme ne doit pas faire plus d'une quinzaine de lignes. */

#include <iostream>
using namespace std;

int main()
{
    int nb = 1;
    while (nb <= 100)
    {
        cout << nb << endl;
        nb++;
    }
    cout << "J'arrive !" << endl;
}
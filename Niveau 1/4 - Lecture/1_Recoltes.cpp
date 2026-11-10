/*
 Votre programme doit lire un entier, qui représente la longueur du côté d'un champ carré en mètres. Il doit ensuite afficher la masse que l'on pourra récolter de ce champ si l'on suppose que la production sera de 23 kg par mètre carré.
 */

#include <iostream>
using namespace std;

int main()
{
    int side;
    cin >> side;
    cout << side * side * 23;
}
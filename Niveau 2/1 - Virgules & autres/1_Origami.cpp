/*
 L'épaisseur d'une feuille de papier est de 110 micromètres c'est à dire 0,110 millimètres. Si on la plie 15 fois sur elle-même et que l'épaisseur double à chaque fois, quelle sera l'épaisseur finale si on l'exprime en centimètres ? Votre programme devra calculer et afficher cette valeur (qui n'est pas forcément entière).
 */

#include <iostream>
using namespace std;

int main()
{
    double epais = 0.011;
    for (int i = 0; i < 15; i++)
    {
        epais *= 2;
    }
    cout << epais << endl;
}
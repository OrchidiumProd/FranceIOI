/*
 Votre programme doit lire deux entiers, compris entre 1 et 6, la valeur de chaque dé. Si la somme est supérieure ou égale à 10, alors vous devez payer une taxe spéciale (36 pièces). Sinon, vous payez deux fois la somme des valeurs des deux dés. Votre programme devra afficher selon le cas le texte « Taxe spéciale ! » ou bien « Taxe régulière », puis la somme à payer (sans indiquer l'unité).
 */

#include <iostream>
using namespace std;

int main()
{
    int d1, d2;
    cin >> d1 >> d2;
    if (d1 + d2 >= 10)
    {
        cout << "Taxe spéciale !" << endl;
        cout << 36 << endl;
    }
    else
    {
        cout << "Taxe régulière" << endl;
        cout << 2 * (d1 + d2) << endl;
    }
}
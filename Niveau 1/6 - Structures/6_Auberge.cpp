/*
 Une chambre ne coûte rien si on a 60 ans (l'âge de l'aubergiste !) et 5 écus si on a strictement moins de 10 ans. Pour les autres personnes c'est 30 écus plus un supplément de 10 écus si on a au moins 20 kilos de bagages.

Votre programme doit lire deux entiers, l'âge et le poids des bagages de la personne et doit afficher le prix, sous la forme d'un entier.
*/

#include <iostream>
using namespace std;

int main()
{
    int age, poids;
    cin >> age >> poids;
    if (age == 60)
    {
        cout << 0 << endl;
    }
    else if (age < 10)
    {
        cout << 5 << endl;
    }
    else if (poids < 20)
    {
        cout << 30 << endl;
    }
    else
    {
        cout << 40 << endl;
    }
}
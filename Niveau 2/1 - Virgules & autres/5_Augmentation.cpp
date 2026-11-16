/*
 Votre programme devra lire un entier, la population actuelle de la ville, puis un nombre décimal, la croissance prévue de la population, en pourcentage. Il devra alors afficher la nouvelle population de la ville sous la forme d'un nombre entier. On considérera, par convention, qu'une population de 31,4 habitants signifie qu'il y a 31 habitants, on ne compte donc que les habitants « entiers » !
 */

#include <iostream>
using namespace std;

int main()
{
    int pop;
    double crois;
    cin >> pop >> crois;
    cout << (int)(pop * (1 + (crois / 100))) << endl;
}
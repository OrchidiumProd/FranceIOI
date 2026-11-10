/*
 Votre programme doit lire l'âge d'une personne et afficher soit « Tarif réduit » si cette personne a strictement moins de 21 ans, soit « Tarif plein » dans le cas contraire.
 */

#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age < 21)
    {
        cout << "Tarif réduit" << endl;
    }
    else
    {
        cout << "Tarif plein" << endl;
    }
}
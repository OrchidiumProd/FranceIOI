/*
 On vous donne un entier, le numéro d'une personne recherchée, puis un entier tailleListe, et enfin tailleListe entiers parmi lesquels vous devez chercher le numéro de la personne. Si le numéro est présent dans la liste (il peut l'être plusieurs fois) vous devez afficher le texte "Sorti de la ville" sinon "Encore dans la ville".
 */

#include <iostream>
using namespace std;

int main()
{
    bool in = true;
    int num, tailleListe, sus;
    cin >> num >> tailleListe;
    for (int i = 0; i < tailleListe; i++)
    {
        cin >> sus;
        if (num == sus)
        {
            in = false;
            break;
        }
    }
    if (in)
    {
        cout << "Encore dans la ville" << endl;
    }
    else
    {
        cout << "Sorti de la ville" << endl;
    }
}
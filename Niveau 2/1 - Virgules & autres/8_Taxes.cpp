/*
 Votre programme doit lire trois nombres décimaux : la valeur actuelle de la taxe sur les fruits et légumes (en pourcentage), la nouvelle valeur de la taxe (en pourcentage), puis le prix actuel d'un légume, taxes comprises, en euros. Il devra calculer et afficher le prix du légume avec la nouvelle valeur de la taxe, arrondi au centime près.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double taxe, ntaxe, prix;
    cin >> taxe >> ntaxe >> prix;
    cout << round((prix / (1 + taxe / 100)) * (1 + ntaxe / 100) * 100) / 100 << endl;
}

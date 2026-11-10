/*
 Étant données deux températures entières tempMin et tempMax, votre programme doit afficher toutes les températures comprises entre les deux, bornes incluses.
 */

#include <iostream>
using namespace std;

int main()
{
    int tempMin;
    int tempMax;
    cin >> tempMin;
    cin >> tempMax;
    for (int i = tempMin; i <= tempMax; i++)
    {
        cout << i << endl;
    }
}
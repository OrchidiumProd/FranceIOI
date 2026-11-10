/*
 Votre programme doit lire deux entiers, correspondant à deux numéros de bornes kilométriques, et il doit afficher la distance séparant ces deux bornes. Notez que le résultat doit être un nombre positif ou nul.
 */

#include <iostream>
using namespace std;

int main()
{
    int b1, b2;
    cin >> b1 >> b2;
    int res = b1 - b2;
    if (res < 0)
    {
        res = -res;
    }
    cout << res << endl;
}
/*
 Votre programme doit lire un entier, le nombre de lignes souhaité, et écrira autant de fois que demandé la phrase « Je dois suivre en cours ».
 */

#include <iostream>
using namespace std;

int main()
{
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        cout << "Je dois suivre en cours" << endl;
    }
}
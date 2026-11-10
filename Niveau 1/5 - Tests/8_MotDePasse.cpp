/*
 Votre programme doit lire un entier : le code fourni par l'utilisateur. Si ce code correspond au code secret, qui est 64 741, alors le programme devra afficher le texte « Bon festin ! ». Sinon, il devra afficher « Allez-vous en ! ».
 */

#include <iostream>
using namespace std;

int main()
{
    int code;
    cin >> code;
    if (code == 64741)
    {
        cout << "Bon festin !" << endl;
    }
    else
    {
        cout << "Allez-vous en !" << endl;
    }
}
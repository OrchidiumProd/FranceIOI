/*
 Votre programme lira deux entiers : le nombre de paquets et le poids d'un paquet. Si le poids total est strictement supérieur à 105 kg, votre programme devra alors afficher le texte « Surcharge ! ».
 */

#include <iostream>
using namespace std;

int main()
{
    int nb, poids;
    cin >> nb >> poids;
    if (nb * poids > 105)
    {
        cout << "Surcharge !" << endl;
    }
}
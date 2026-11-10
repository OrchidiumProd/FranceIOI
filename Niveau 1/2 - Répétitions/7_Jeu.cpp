/*
 Un damier de dimension 4×4 peut se représenter sous la forme suivante :
↳

OXOX
XOXO
OXOX
XOXO

Votre programme doit afficher un damier de taille 40×40. Assurez-vous bien que la case tout en haut à gauche contienne un « O », comme c'est le cas dans le damier ci-dessus.
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 20; i++)
    {

        for (int j = 0; j < 20; j++)
        {
            cout << "OX";
        }
        cout << endl;

        for (int k = 0; k < 20; k++)
        {
            cout << "XO";
        }
        cout << endl;
    }
}